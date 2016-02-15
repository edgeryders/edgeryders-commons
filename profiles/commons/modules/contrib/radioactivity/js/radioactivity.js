(function ($) {
Drupal.behaviors.radioactivity = {

  config: '',
  attached: false,
  activeIncidents: [],

  attach: function (context, settings) {

    // Skip if radioactivity is not set
    if (typeof settings.radioactivity == 'undefined') {
      return;
    }

    var config = settings.radioactivity.config;
    var emitters = settings.radioactivity.emitters;
    
    // Clear used emitters
    settings.radioactivity.emitters = []; 

    this.config = config;

    $.each(emitters, function(callback, incidents) {

      // Accuracy and  flood filtering
      $.each(incidents, function(index, incident) {

        var config = Drupal.behaviors.radioactivity.config;
        var key = 'radioactivity_' + incident['checksum'];

        // Flood protection (cookie based)
        if (config.fpEnabled) {  
          if (Drupal.behaviors.radioactivity.fetch(key)) {
            // Filter
            return;
          } else {
            var exp = new Date();
            exp.setTime(exp.getTime() + (config.fpTimeout * 60 * 1000));
            Drupal.behaviors.radioactivity.store(key, true, exp);
          }
        } else {
          // clear the possible cookie
          Drupal.behaviors.radioactivity.store(key, null, new Date());
          //$.cookie(key, null);
        }

        // Accuracy filtering
        var rnd = Math.random() * 100;
        if (rnd >= incident.accuracy) {
          return;
        }

        Drupal.behaviors.radioactivity.activeIncidents.push(incident);
      });

      // Call the emitter callback
      if (Drupal.behaviors.radioactivity.activeIncidents.length > 0) {
        Drupal.behaviors.radioactivity[callback](Drupal.behaviors.radioactivity.activeIncidents);
        // Clear incidents
        Drupal.behaviors.radioactivity.activeIncidents = [];
      }
    });
  },

  hardStore: function (key, value, exp) {
    try {
      if (typeof(Storage) !== "undefined") {
        localStorage.setItem(key, JSON.stringify({
          value: value,
          expire: exp.getTime()
        }));
        sessionStorage.setItem(key, JSON.stringify({
          value: value,
          expire: exp.getTime()
        }));      
      }
    } catch(e){
      $.cookie(key, value, { expires: exp });
    }
    $.cookie(key, value, { expires: exp });
  },

  hardFetch: function (key) {
    var data = null;
    if (typeof(Storage) !== "undefined") {
      try{
        data = localStorage.getItem(key)
        if (!data) {
          data = sessionStorage.getItem(key);
        }
      } catch(e){
        
      }
    }
    if (!data) {
      data = $.cookie(key);
    }
    return data;
  },

  store: function (key, value, exp) {
    //return this.hardStore(key, value, exp);
    if (typeof(Storage) !== "undefined") {
      // Fall back to using cookies if this fails
      try {
        localStorage.setItem(key, JSON.stringify({
          value: value,
          expire: exp.getTime()
        }));
      } catch(e) {
        $.cookie(key, value, { expires: exp });
      }
    } else {
      $.cookie(key, value, { expires: exp });
    }
  },

  fetch: function (key) {
    var now = new Date();
    if (typeof(Storage) !== "undefined") {
      // Fall back to using cookies if this fails
      try {
        var data = localStorage.getItem(key);
        if (data) {
          data = JSON.parse(data);
          if (now.getTime() < data.expire) {
            return data.value;
          }
        }
        return null;
      } catch(e) {
        return $.cookie(key);
      }
    }
    return $.cookie(key);
  },

  emitDefault: function (incidents) {
    $.ajax({
      url: this.config.emitPath,
      data: {'incidents': incidents},
      type: 'POST',
      cache: false,
      dataType: "html"
    });
  }
};
})(jQuery);
