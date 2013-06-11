(function ($) {
  Drupal.behaviors.time_tracker_timer = {
    attach: function(context, settings) {
      var hh;
      var ss;
      var mm;
      var time;

      $('td.active_timer_time').each(function(index) {
          time = $(this).html();
          hh = time.split(':')[0];
          mm = time.split(':')[1];
          ss = time.split(':')[2];
          addTime(hh, mm, ss, $(this));
      });


      /**
       Adds a second of time
      */
      function addTime(hh, mm, ss, el) {
        ss++;
        if(ss == 60) {
          ss = 0;
          mm++;
        }
        if (mm == 60) {
          mm = 0;
          hh++;
        }
        var func = function () {
          addTime(hh,mm,ss,el);
        }
        setTimeout(func, 1000);
        el.html(pad(hh, 2) + ":" + pad(mm, 2) + ":" + pad(ss, 2));
      }

      /*
       Pad a number with zeroes
      */
      function pad(number, length) {
        var str = '' + number;
        while (str.length < length) {
          str = '0' + str;
        }
        return str;
      }
    }
  }
})(jQuery);


