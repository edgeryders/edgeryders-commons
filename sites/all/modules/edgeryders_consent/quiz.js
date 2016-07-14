/**
 * @file 
 * TODO
 * Derived from the quizlib example quiz.
 */

// Variables needed across functions, so making them global here.
var quiz;
var quizDialog;

/**
 * TODO
 */
function showResults() {
    // Check answers and continue if all questions have been answered
    if (quiz.checkAnswers()) {
        var quizScorePercent = quiz.result.scorePercentFormatted;
        
        if (quizScorePercent == 100) {
            jQuery('#quiz-result-progress').hide();
            jQuery('#quiz-result-finished').show();
            
            jQuery('#check-button').prop('disabled', true);
            jQuery('#proceed-button').prop('disabled', false);
        }
        else {
            document.getElementById('quiz-score').innerHTML = quiz.result.score.toString();
            document.getElementById('quiz-max-score').innerHTML = quiz.result.totalQuestions.toString();

            // Change background colour of results div according to percent scored.
            var quizResultElement = document.getElementById('quiz-result-progress');
            if (quizScorePercent >= 75) quizResultElement.style.backgroundColor = '#4caf50';
            else if (quizScorePercent >= 50) quizResultElement.style.backgroundColor = '#ffc107';
            else if (quizScorePercent >= 25) quizResultElement.style.backgroundColor = '#ff9800';
            else if (quizScorePercent >= 0) quizResultElement.style.backgroundColor = '#f44336';
        
            jQuery('#quiz-result-finished').hide();
            jQuery('#quiz-result-progress').show();
            
            jQuery('#check-button').prop('disabled', false);
            jQuery('#proceed-button').prop('disabled', true);
        }
        
        // Highlight questions according to whether they were correctly answered. The callback allows us to highlight/show the correct answer
        quiz.highlightResults(handleAnswers);
    }
}

/** Highlight the correct answers of incorrectly answered questions.
 *
 * This is called during Quiz::highlightResults() as a callback.
 *
 * @param question: the DOM element representing the question
 * @param no: the question number
 * @param correct: flag indicating if the question was answered correctly
 */
function handleAnswers(question, no, correct) {

    var answers = question.getElementsByTagName('input');
    for (var i = 0; i < answers.length; i++) {
    
        var hintID = '#quizlib-hint-q' + no; // For most questions, that's it, since they need only one hint per question.
        if (answers[i].type === "checkbox") hintID += '-' + answers[i].value; // Checkbox questions have one hint to show per answer.
        jQuery(hintID).hide(); // Clean slate: hide all hints. They might be visible from last time checking answers.
        
        // Highlight answers as correct / incorrect, but only if the question is not answered correctly as a whole.
        if (!correct) {
            // If this answer option is a checkbox / radio button, show if selected correctly, and show a hint.
            if (answers[i].type === "checkbox" || answers[i].type === "radio") {
                // If the current answer is selected incorrectly, highlight as incorrect and display a hint.
                // (Selected incorrectly: selected if selecting it is the right answer, not selecting it if not selecting it is the right answer.)
                if ((answers[i].checked == false && quiz.answers[no].indexOf(answers[i].value) > -1) || 
                    (answers[i].checked == true  && quiz.answers[no].indexOf(answers[i].value) == -1)
                ) {
                    answers[i].parentNode.classList.add(quiz.Classes.INCORRECT);
                    jQuery(hintID).show(); // TODO If nothing found, don't call .show().
                }
                // If the current answer is selected correctly, highlight as correct and hide the hint.
                else {
                    answers[i].parentNode.classList.add(quiz.Classes.CORRECT);
                }
                    
            // If the answer is a text field, show the correct answer next to the element.
            } else {
                jQuery(hintID).show();
                var correctAnswer = document.createElement('span');
                correctAnswer.classList.add(quiz.Classes.CORRECT);
                correctAnswer.classList.add(quiz.Classes.TEMP); // quiz.checkAnswers will automatically remove elements with the temp class
                correctAnswer.innerHTML = quiz.answers[no];
                correctAnswer.style.marginLeft = '10px';
                answers[i].parentNode.insertBefore(correctAnswer, answers[i].nextSibling);
            }
        }
    }
}

/**
 * TODO
 */
function closeQuiz() {
    // Recalculate the results. (User might have changed something in the form *after* the dialog close button became available!)
    showResults();

    if (quiz.result.scorePercentFormatted == 100) {
        quizDialog.close(true); // True means consent given, the only possible return value. Not needed though.
        jQuery('#edit-consent-opencare').prop('value', 1);
    }
}

/**
 * TODO
 */
window.onload = function() {

    // Nothing to do if consent was already given (in a prior submission attempt of this form, or retrieved from the user profile).
    if (jQuery('#edit-consent-opencare').val() == '1') return;

    // Create Quiz object using: DOM element <div id="quiz"> by ID (rendered into form by edgeryders_consent.module), answers array
    quiz = new Quiz('quiz', [ 
        ['b'], // Question 1 answer b is correct (multiple choice question, using checkboxes).
        'b',   // Question 2 answer b is correct (single-choice question, using radiobuttons).
    ]);
    
    // Show the quiz in a modal JavaScript popup dialog.
    // (Uses Drupal's "Dialog API for JavaScript", see https://www.drupal.org/project/dialog)
    quizDialog  = Drupal.dialog(document.getElementById('quiz'), { closeOnEscape: false });
    quizDialog.showModal();
};

