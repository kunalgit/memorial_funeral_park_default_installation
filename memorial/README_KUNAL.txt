1. untar memorial.tar.gz
2. go to memorial/sites/default and give write permissions to files dir and settings.php
3. then go to memorial/sites/site1.com and give write permissions to files dir and settings.php
4. edit /etc/hosts and add "site1.com" to localhost
5. create two empty database schemas
6. point nginx to memorial directory
7. go to url localhost:portno and install drupal default installation using DRUPAL profile
8. go to url site1.com:portno and install site1 with "memorial site1" profile
9. after installation go to site1.com:portno/admin and login
10. go to site-building -> blocks and put nice-menu-1 into the header block 
11. go to the configuration of the the nice-menu-1 block and change :
                                 block title to <none>
                                 manu parent to primary links
                                 menu style  to down
                                 
12. goto the site building -> themes -> configure and set path to the custom nice menus cssd file to "sites/site1.com/themes/theme4/css/nice-menu-theme4-custom.css"
13 goto content management -> content types -> add content type
Name: Page
Type: page
Description: Website static pages
comment settings > default comment settings >Disabled
Save Content type
14. go to site building -> modules -> enable menu import module -> save config
15. goto site building ->menus -> import menus
menus to import in - primary links
choose file /memorial/migrate/menus.txt
node type - page
node options - link to existing and create empty nodes
upload and preview
import
16. go to site bulding->modules -> 
enable  content multigroup
	content permissions
	fieldgroup
	filefield
	imagefield
	filefield paths
	webform
save configuaration

enable obituaries module to get obituary content type
enable life journeys to enable life journeys content type
enable node comments to get "comment" content type which will be used for guestbook entries
enable obit_view module to get obituaries view where the list o obituaries will be generated
enable concat_obit to get full names in obituaries view
enable commentmodulenew to get required fields in node_comments
17. goto content management->content types->edit obituaries->manage fields->
add a new field
label : obit_image
field name : field_obit_image
type of data : file
form element : image
save 
save field settings

18. goto admin -> content types -> obit_user_links -> edit  comment settings and set node type for comments to comments.
19. goto admin -> content types -> comments -> edit  comment settings and set node type for comments to comments.

NOW THE SITE IS SET UP WITH MENUS, OBITUARIES, LIFE JOURNEYS, GUESTBOOK 

20. create a database CManager.development and copy the old database into it.
21. Run command php ./migrate/migrate.php from memorial directory.(change database name, user, pass, obitimagelocation, locationid in fin.php, comment_node.php, usermig.php)

22. For POPUP surrvey form on home page
    create a webform content with all the required questions. (title can be nething, body is left blank and url path settings : survey)
    it can be made multistep by using page break in field type
    save it
NOW A MULTISTEP POPUP WILL COME ON THE HOME PAGEk




TO INSTALL ANOTHER SITE
goto memorial base directory /home/kunal/Desktop/memorial# 
/home/kunal/Desktop/memorial# cd sites/
/home/kunal/Desktop/memorial/sites# mkdir site2.com
/home/kunal/Desktop/memorial/sites# cd site2.com/
/home/kunal/Desktop/memorial/sites/site2.com# mkdir files
/home/kunal/Desktop/memorial/sites/site2.com# mkdir themes
/home/kunal/Desktop/memorial/sites/site2.com# cp ../default/default.settings.php ./settings.php
/home/kunal/Desktop/memorial/sites/site2.com# ls
files  settings.php  themes
/home/kunal/Desktop/memorial/sites/site2.com# cp -r ../site1.com/themes/theme4/ ./themes/

edit /etc/hosts
add site2.com
create empty database for site2
goto url site2.com:portno
and install site using memorial site profile
FOLLOW STEPS 9 TO 22
