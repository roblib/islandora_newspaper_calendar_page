# Islandora Newspapers Calendar Page

## Introduction

This module replaces the default newspaper 'View' tab content with a view of a calendar. 
One year's calendar is shown at a time and the year can be changed from a dropdown list.

![Screenshot](https://user-images.githubusercontent.com/1943338/29664376-bf17d230-88a5-11e7-8b3b-282174da2bab.png)

## Requirements

This module requires the following modules:

* [Islandora Newspaper Solution Pack](https://github.com/Islandora/islandora_solution_pack_newspaper)
* [Islandora Solr](https://github.com/Islandora/islandora_solr_search)

## Configuration

This module requires that your solr configuration has a single-valued Date field (date type, usually _dt) on your 
Newspaper Issue objects that reflects the publication date. This will be used to populate the calendar, and is also 
used for sorting. To configure this field, go to **Admin** > **Islandora** > **Islandora Utility Modules** > **Newspaper Calendar Page**
 (admin/islandora/tools/newspaper-calendar).

![Admin Screenshot](https://user-images.githubusercontent.com/1943338/29674117-92fd1260-88c7-11e7-928f-1505470a4bdf.png)

## "Maintainers"

This module is maintained very sporadically, and was designed for use on http://islandnewspapers.ca. It is maintained by the Robertson Library.


## License

This program comes with ABSOLUTELY NO WARRANTY and is licensed under the [GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt).
