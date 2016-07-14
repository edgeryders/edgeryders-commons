
<!-- Quiz Container -->
<div id="quiz">
    <!-- Quiz Results -->
    <div id="quiz-result-progress" class="card">
        <span id="quiz-score"></span> of <span id="quiz-max-score"></span> questions done. Please check the hints and answer again!
    </div>
    
    <div id="quiz-result-finished" class="card">
        Well done, you understand it all! Now we are curious to hear your story. Proceed with the button below.
    </div>

    <!-- Question 1 -->
    <div class="quizlib-intro">This challenge belongs to the <a href="https://edgeryders.eu/en/op3ncare/home">OpenCare</a> research 
      project. Before you can start contributing, we need your attention this one time so we know you understand how to use this 
      space. Just answer these two questions until you get them right!</div>
    
    <div class="card quizlib-question">
        <div class="quizlib-question-title">1. This platform is only loosely moderated – to avoid harassment and 
          exploitative behaviours, but to allow unconstrained conversation. Knowing this, what would you do here?</div>
        <div class="quizlib-question-answers">
            <ul>
                <li>
                    <label><input type="checkbox" name="q0" value="a">I would share my credit card data if asked.</label>
                    <div id="quizlib-hint-q0-a" class="quizlib-hint">This is seriously the kind of sensitive information that you should only share with 
                      secure services, when it is fully clear to you what the purpose of the transaction is, namely: purchase of a 
                      good / service.</div>
                </li>
                <li>
                    <label><input type="checkbox" name="q0" value="b">I would engage in a conversation about my last 
                      experience with the National Health Service (or the equivalent in my country).</label>
                    <div id="quizlib-hint-q0-b" class="quizlib-hint">This platform is explicitly meant to host and facilitate conversations on topics 
                      akin to this. While you are of course free to avoid engaging in this kind of discourse, we encourage you to reflect 
                      on the purpose of your joining this community.</div>
                </li>
            </ul>
        </div>
    </div>
    <!-- Question 2 -->
    <div class="card quizlib-question">
        <div class="quizlib-question-title">2. Is OpenCare offering health care or social care advice?</div>
        <div class="quizlib-question-answers">
            <ul>
                <li><label><input type="radio" name="q1" value="a">Yes</label></li>
                <li><label><input type="radio" name="q1" value="b">No</label></li>
            </ul>
            <div id="quizlib-hint-q1" class="quizlib-hint">OpenCare is a platform for users to freely share their experience with health care and social 
              care, or their ideas to solve related problems. It is by no means a substitution for your doctor, nurse or social assistant 
              … although we would love if they could join us too ;)</div>
        </div>
    </div>

    <!-- Dialog Buttons -->
    <button id="check-button" type="button" onclick="showResults();">Check Answers</button>
    <button id="proceed-button" type="button" disabled onclick="closeQuiz();">Proceed to tell my story</button>
</div>

