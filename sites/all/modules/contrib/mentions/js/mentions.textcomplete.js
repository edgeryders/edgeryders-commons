(function ($) {
  Drupal.behaviors.mentionsTextcomplete = {
    attach: function () {
      var settings = Drupal.settings.mentions.textcomplete;
      var matchExp = new RegExp('\\B' + settings.prefix_regex + '(\\w*)$');

      $.each(settings.forms, function (index, form) {
        $('textarea[id^="' + form + '-value"]').textcomplete([
          {
            form: form,
            match: matchExp,
            search: function (term, callback) {
              var format_id = $('select[id^="' + this.form + '-format"]').val();
              if ($.inArray(format_id, settings.formats) != -1) {
                $.getJSON(Drupal.settings.basePath + 'mentions/autocomplete/' + format_id + '/' + term, function (resp) {
                  callback(resp);
                });
              }
              else {
                callback([]);
              }
            },
            replace: function (mention) {
              return settings.prefix + mention + settings.suffix + ' ';
            },
            index: 1
          }
        ]);
      });
    }
  }
})(jQuery);
