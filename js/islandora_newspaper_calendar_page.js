Drupal.behaviors.islandora_newspaper_calendar_page = {
  attach: function(context, settings) {
    jQuery('#date-change').change(function() {
      var val = jQuery(this).find('option:selected').attr('value');
      var path = window.location.href;
      var loc = path.lastIndexOf('?year=');
      if (loc >= 0) {
        var end = loc + 6;
        var newpath = path.substring(0, end);
        window.location.href = newpath.concat(val);
      }
      else {
        window.location.href = path.concat("?year=" + val);
      }
    });
  }
}
