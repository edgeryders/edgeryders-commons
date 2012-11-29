/**
 * @overview: Exposes John Resig's Simply JavaScrip Inheritance as a CommonJS
 *            module (see bottom of file).
 *//* Simple JavaScript Inheritance
 * By John Resig http://ejohn.org/
 * MIT Licensed.
 */// Inspired by base2 and Prototype
(function(){var e=!1,t=/xyz/.test(function(){xyz})?/\b_super\b/:/.*/;this.Class=function(){},Class.extend=function(){function u(){!e&&this.init&&this.init.apply(this,arguments)}var n=this.prototype;e=!0;var r=new this;e=!1;for(var i=0;i<arguments.length;i++){var s=arguments[i];for(var o in s)r[o]=typeof s[o]=="function"&&typeof n[o]=="function"&&t.test(s[o])?function(e,t){return function(){var r=this._super;this._super=n[e];var i=t.apply(this,arguments);return this._super=r,i}}(o,s[o]):s[o]}return u.prototype=r,u.constructor=u,u.extend=arguments.callee,u}})(),typeof define=="function"&&define("Class",[],function(){return Class});