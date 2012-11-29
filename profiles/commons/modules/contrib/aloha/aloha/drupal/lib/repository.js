define([
  'aloha',
  'jquery'
], function (Aloha, jQuery) {
  'use strict';

  /**
   * If a DrupalRepository can return Repository Items of more than one type,
   * then you should override its query() method.
   */
  var DrupalRepository = Aloha.AbstractRepository.extend({
    _constructor: function (repositoryId, repositoryName, url, type) {
      this._super(repositoryId, repositoryName);
      this.settings.url = url;
      this.settings.type = type;
    },

    init: function () {},

    query: function (p, callback) {
      // Query string must be >3 characters.
      if (p.queryString && p.queryString.length < 3) {
        callback.call(this, []);
        return;
      }

      // Ensure this repository's type is allowed by the objectTypeFilter.
      if (jQuery.inArray(this.settings.type, p.objectTypeFilter) == -1) {
        callback.call(this, []);
        return;
      }

      var that = this;
      jQuery.ajax({
        type: "GET",
        dataType: "json",
        url: this.settings.url + p.queryString,
        success: function (searchResults) {
          var suggestions = [];

          if (searchResults && searchResults.length > 0) {
            for (var i = 0; i < searchResults.length; i++) {
              if (typeof searchResults[i] !== "function") {
                suggestions.push(new Aloha.RepositoryDocument({
                  id: searchResults[i].u, // u: url
                  url: searchResults[i].u,
                  name: searchResults[i].t, // t: title
                  weight: searchResults[i].s, // s: score
                  repositoryId: that.repositoryName,
                  type: that.settings.type
                }));
              }
            }
            callback.call(this, suggestions);
          }
        }
      });
    }
  });

  // Create a DrupalRepository for every repository listed in the settings.
  if (Aloha.settings.drupal && Aloha.settings.drupal.repository) {
    var settings = Aloha.settings.drupal.repository;
    for (var repositoryId in settings) {
      if (settings.hasOwnProperty(repositoryId)) {
        var repo = settings[repositoryId];
        new DrupalRepository(repositoryId, repo.name, repo.url, repo.type);
      }
    }
  }
});
