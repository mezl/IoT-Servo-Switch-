const char * cssButton =
"button {\r\n"
"  font-family: Helvetica, Arial, sans-serif;\r\n"
"  position: relative;\r\n"
"  color: #cfcfcf;\r\n"
"  font-size: 2em;\r\n"
"  cursor: pointer;\r\n"
"  background: rgb(239,239,239);\r\n"
"  background: -moz-linear-gradient(top,  rgba(239,239,239,1) 25%, rgba(226,226,226,1) 50%, rgba(239,239,239,1) 75%);\r\n"
"  background: -webkit-gradient(linear, left top, left bottom, color-stop(25%,rgba(239,239,239,1)), color-stop(50%,rgba(226,226,226,1)), color-stop(75%,rgba(239,239,239,1)));\r\n"
"  background: -webkit-linear-gradient(top,  rgba(239,239,239,1) 25%,rgba(226,226,226,1) 50%,rgba(239,239,239,1) 75%);\r\n"
"  background: -o-linear-gradient(top,  rgba(239,239,239,1) 25%,rgba(226,226,226,1) 50%,rgba(239,239,239,1) 75%);\r\n"
"  background: -ms-linear-gradient(top,  rgba(239,239,239,1) 25%,rgba(226,226,226,1) 50%,rgba(239,239,239,1) 75%);\r\n"
"  background: linear-gradient(top,  rgba(239,239,239,1) 25%,rgba(226,226,226,1) 50%,rgba(239,239,239,1) 75%);\r\n"
"  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#efefef', endColorstr='#efefef',GradientType=0 );\r\n"
"  width: 400px;\r\n"
"  height: 400px;\r\n"
"  padding: 70px 0 70px 0;\r\n"
"  border: none;\r\n"
"  -moz-box-shadow: 0 3px 10px 1px #894e30, 0 0 1px 2px #917760, inset 0 -6px 2px rgba(0,0,0,0.15), inset 0 5px 2px rgba(0,0,0,0.1), inset 0 12px 2px #fff;\r\n"
"  -webkit-box-shadow: 0 3px 10px 1px #894e30, 0 0 1px 2px #917760, inset 0 -6px 2px rgba(0,0,0,0.15), inset 0 5px 2px rgba(0,0,0,0.1), inset 0 12px 2px #fff;\r\n"
"  box-shadow: 0 3px 10px 1px #894e30, 0 0 1px 2px #917760, inset 0 -6px 2px rgba(0,0,0,0.15), inset 0 5px 2px rgba(0,0,0,0.1), inset 0 12px 2px #fff;\r\n"
"  -moz-border-radius: 60px;\r\n"
"  -webkit-border-radius: 60px;\r\n"
"  border-radius: 60px;\r\n"
"  -webkit-tap-highlight-color: rgba(0,0,0,0); /* on tap (iphone/ipad) don't grey button */\r\n"
"  outline: none;\r\n"
"}\r\n"
"\r\n"
"/* hides the dotted border around the switch (Firefox) */\r\n"
"button::-moz-focus-inner {\r\n"
"  border: 0;\r\n"
"}\r\n"
"\r\n"
"/* the 4 screws are attached to the socket (before, after) and to the span button (before, after) */\r\n"
"button:before, button:after, button span:before, button span:after {\r\n"
"  content: \"\\00d7\";\r\n"
"  font-size: 0.5em;\r\n"
"  font-weight: bold;\r\n"
"  color: #999;\r\n"
"  text-shadow: 0 1px 0 #fff;\r\n"
"  position: absolute;\r\n"
"  top: 25px;\r\n"
"  left: 30px;\r\n"
"  width: 21px;\r\n"
"  height: 21px;\r\n"
"  line-height: 21px;\r\n"
"  -moz-border-radius: 60px;\r\n"
"  -webkit-border-radius: 60px;\r\n"
"  border-radius: 60px;\r\n"
"  -moz-box-shadow: 0 2px 1px #fff, inset 0 1px 1px #aaa, inset 0 2px 2px #999, inset 0 8px 4px rgba(255,255,255,0.5), inset 0 0 5px rgba(0,0,0,0.1);\r\n"
"  -webkit-box-shadow: 0 2px 1px #fff, inset 0 1px 1px #aaa, inset 0 2px 2px #999, inset 0 8px 4px rgba(255,255,255,0.5), inset 0 0 5px rgba(0,0,0,0.1);\r\n"
"  box-shadow: 0 2px 1px #fff, inset 0 1px 1px #888, inset 0 2px 3px #999, inset 0 8px 4px rgba(255,255,255,0.7), inset 0 0 10px rgba(0,0,0,0.1);\r\n"
"  background: -moz-linear-gradient(top,  rgba(152,152,152,0) 0%, rgba(255,255,255,1) 100%);\r\n"
"  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,rgba(152,152,152,0)), color-stop(100%,rgba(255,255,255,1)));\r\n"
"  background: -webkit-linear-gradient(top,  rgba(152,152,152,0) 0%,rgba(255,255,255,1) 100%);\r\n"
"  background: -o-linear-gradient(top,  rgba(152,152,152,0) 0%,rgba(255,255,255,1) 100%);\r\n"
"  background: -ms-linear-gradient(top,  rgba(152,152,152,0) 0%,rgba(255,255,255,1) 100%);\r\n"
"  background: linear-gradient(top,  rgba(152,152,152,0) 0%,rgba(255,255,255,1) 100%);\r\n"
"  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#00666666', endColorstr='#c4ffffff',GradientType=0 );\r\n"
"}\r\n"
"\r\n"
"/* right-top screw position */\r\n"
"button:after {\r\n"
"  left: auto;\r\n"
"  right: 30px;\r\n"
"}\r\n"
"\r\n"
"/* left-bottom screw position */\r\n"
"button span:before {\r\n"
"  left: -90px;\r\n"
"  top: 278px;\r\n"
"}\r\n"
"\r\n"
"/* right-bottom screw position */\r\n"
"button span:after {\r\n"
"  top: 278px;\r\n"
"  left: auto;\r\n"
"  right: -90px;\r\n"
"}\r\n"
"\r\n"
"/* the inner socket of the switch */\r\n"
"button span {\r\n"
"  width: 160px;\r\n"
"  z-index: 1;\r\n"
"  position: relative;\r\n"
"  height: 250px;\r\n"
"  display: block;\r\n"
"  margin: 0 auto;\r\n"
"  -moz-border-radius: 40px;\r\n"
"  -webkit-border-radius: 40px;\r\n"
"  border-radius: 40px;\r\n"
"  background: #fff;\r\n"
"  -moz-box-shadow: inset 0 0 1px 1px #ccc, inset 0 0 0 8px #ddd, inset 0 0 0 10px #888, inset 0 10px 0 10px #fff;\r\n"
"  -webkit-box-shadow: inset 0 0 1px 1px #ccc, inset 0 0 0 8px #ddd, inset 0 0 0 10px #888, inset 0 10px 0 10px #fff;\r\n"
"  box-shadow: inset 0 0 1px 1px #ccc, inset 0 0 0 8px #ddd, inset 0 0 0 10px #888, inset 0 10px 0 10px #fff;\r\n"
"}\r\n"
"\r\n"
"/* positioning of the \"I\" on the switch. Button OFF state (gradient down) */\r\n"
"button span>b:first-child {\r\n"
"  position: absolute;\r\n"
"  text-shadow: 0 -1px 0 #666, 0 1px 0 #fff;\r\n"
"  top: 11px;\r\n"
"  left: 10px;\r\n"
"  height: 70%;\r\n"
"  width: 140px;\r\n"
"  padding-top: 10px;\r\n"
"  color: #ccc;\r\n"
"  -moz-border-radius: 31px;\r\n"
"  -webkit-border-radius: 31px;\r\n"
"  border-radius: 31px;\r\n"
"  background: rgb(229,229,229);\r\n"
"  background: -moz-linear-gradient(top,  rgba(229,229,229,1) 0%, rgba(255,255,255,1) 60%, rgba(255,255,255,1) 100%);\r\n"
"  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,rgba(229,229,229,1)), color-stop(60%,rgba(255,255,255,1)), color-stop(100%,rgba(255,255,255,1)));\r\n"
"  background: -webkit-linear-gradient(top,  rgba(229,229,229,1) 0%,rgba(255,255,255,1) 60%,rgba(255,255,255,1) 100%);\r\n"
"  background: -o-linear-gradient(top,  rgba(229,229,229,1) 0%,rgba(255,255,255,1) 60%,rgba(255,255,255,1) 100%);\r\n"
"  background: -ms-linear-gradient(top,  rgba(229,229,229,1) 0%,rgba(255,255,255,1) 60%,rgba(255,255,255,1) 100%);\r\n"
"  background: linear-gradient(top,  rgba(229,229,229,1) 0%,rgba(255,255,255,1) 60%,rgba(255,255,255,1) 100%);\r\n"
"  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#e5e5e5', endColorstr='#ffffff',GradientType=0 );\r\n"
"  -moz-box-shadow: inset 0 7px 10px rgba(0,0,0,0.07);\r\n"
"  -webkit-box-shadow: inset 0 7px 10px rgba(0,0,0,0.07);\r\n"
"  box-shadow: inset 0 7px 10px rgba(0,0,0,0.07);\r\n"
"}\r\n"
"\r\n"
"/* positioning of the \"O\" on the switch */\r\n"
"button span>b:last-child {\r\n"
"  position: absolute;\r\n"
"  bottom: 17%;\r\n"
"  color: #eee;\r\n"
"  text-shadow: 0 -1px 0 #ddd, 0 1px 0 #fff;\r\n"
"  width: 140px;\r\n"
"  height: 18%;\r\n"
"  left: 10px;\r\n"
"  padding-top: 20px;\r\n"
"  -moz-border-radius: 40px;\r\n"
"  -webkit-border-radius: 40px;\r\n"
"  border-radius: 40px;\r\n"
"  background: #fff;\r\n"
"}\r\n"
"\r\n"
"/* additional shadow under button, on top of inner container */\r\n"
"button span>b:last-child:before {\r\n"
"  content: \"\";\r\n"
"  position: absolute;\r\n"
"  background: rgba(0,0,0,0.2);\r\n"
"  top: 17px;\r\n"
"  left: 0;\r\n"
"  width: 140px;\r\n"
"  height: 80px;\r\n"
"  -moz-border-radius: 30px;\r\n"
"  -webkit-border-radius: 35px;\r\n"
"  border-radius: 30px;\r\n"
"  z-index: -1;\r\n"
"  -moz-box-shadow: inset 0 -10px 10px rgba(255,255,255,0.2), 0 15px 20px 2px rgba(0,0,0,0.2), 0 50px 30px 2px rgba(0,0,0,0.1);\r\n"
"  -webkit-box-shadow: inset 0 -10px 10px rgba(255,255,255,0.2), 0 15px 20px 2px rgba(0,0,0,0.2), 0 50px 30px 2px rgba(0,0,0,0.1);\r\n"
"  box-shadow: inset 0 -10px 10px rgba(255,255,255,0.2), 0 15px 20px 2px rgba(0,0,0,0.2), 0 50px 30px 2px rgba(0,0,0,0.1);\r\n"
"}\r\n"
"\r\n"
"/* WHEN BUTTON IS OFF */\r\n"
"\r\n"
"/* the inner socket of the switch */\r\n"
"button.off span {\r\n"
"  -moz-box-shadow: inset 0 0 1px 1px #ccc, inset 0 0 0 8px #ddd, inset 0 0 0 10px #888, inset 0 10px 2px 1px rgba(0,0,0,0.15), inset 0 10px 6px rgba(0,0,0,0.5), inset 0 14px 14px rgba(0,0,0,0.3), inset 0 40px 0 #fff;\r\n"
"  -webkit-box-shadow: inset 0 0 1px 1px #ccc, inset 0 0 0 8px #ddd, inset 0 0 0 10px #888, inset 0 10px 2px 1px rgba(0,0,0,0.15), inset 0 10px 6px rgba(0,0,0,0.5), inset 0 14px 14px rgba(0,0,0,0.3), inset 0 40px 0 #fff;\r\n"
"  box-shadow: inset 0 0 1px 1px #ccc, inset 0 0 0 8px #ddd, inset 0 0 0 10px #888, inset 0 10px 2px 1px rgba(0,0,0,0.15), inset 0 10px 6px rgba(0,0,0,0.5), inset 0 14px 14px rgba(0,0,0,0.3), inset 0 40px 0 #fff;\r\n"
"}\r\n"
"\r\n"
"/* top part of button */\r\n"
"button.off span>b:first-child {\r\n"
"  color: #aaa;\r\n"
"  top: 18%;\r\n"
"  left: 12px;\r\n"
"  height: 70%;\r\n"
"  width: 136px;\r\n"
"  padding-top: 10px;\r\n"
"  -moz-border-radius: 35px;\r\n"
"  -webkit-border-radius: 35px;\r\n"
"  border-radius: 35px;\r\n"
"  background: rgb(216,216,216);\r\n"
"  background: -moz-linear-gradient(top,  rgba(216,216,216,1) 0%, rgba(255,255,255,1) 72%);\r\n"
"  background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,rgba(216,216,216,1)), color-stop(72%,rgba(255,255,255,1)));\r\n"
"  background: -webkit-linear-gradient(top,  rgba(216,216,216,1) 0%,rgba(255,255,255,1) 72%);\r\n"
"  background: -o-linear-gradient(top,  rgba(216,216,216,1) 0%,rgba(255,255,255,1) 72%);\r\n"
"  background: -ms-linear-gradient(top,  rgba(216,216,216,1) 0%,rgba(255,255,255,1) 72%);\r\n"
"  background: linear-gradient(top,  rgba(216,216,216,1) 0%,rgba(255,255,255,1) 72%);\r\n"
"  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#d8d8d8', endColorstr='#ffffff',GradientType=0 );\r\n"
"}\r\n"
"\r\n"
"/* bottom part of button */\r\n"
"button.off span>b:last-child {\r\n"
"  position: absolute;\r\n"
"  text-shadow: 0 -1px 0 #bbb, 0 1px 0 #fff;\r\n"
"  color: #dfdfdf;\r\n"
"  top: auto;\r\n"
"  bottom: 7%;\r\n"
"  left: 6%;\r\n"
"  background: none;\r\n"
"}\r\n"
"\r\n"
"/* hides the shadow */\r\n"
"button.off span>b:last-child:before {\r\n"
"  display: none;\r\n"
"}\r\n"
"\r\n"
"/* styles the \"darkness\" popup */\r\n"
".dark {\r\n"
"  display: none;\r\n"
"  position: absolute;\r\n"
"  top: 0%;\r\n"
"  left: 0%;\r\n"
"  width: 100%;\r\n"
"  height: 110%;\r\n"
"  background: black !important;\r\n"
"  z-index: 1000;\r\n"
"  -moz-opacity: 0.90;\r\n"
"  opacity: 0.90;\r\n"
"  filter: alpha(opacity=90);\r\n"
"}\r\n"
"\r\n"
"/* =================================================\r\n"
"   STYLING IS FOR THE PAGE\r\n"
"   ================================================= */\r\n"
"html, body {\r\n"
"  height: 100%;\r\n"
"  overflow: hidden;\r\n"
"  margin: 0;\r\n"
"}\r\n"
"\r\n"
"body {\r\n"
"  background: -moz-radial-gradient(center, ellipse cover,  rgba(237,237,237,0) 0%, rgba(61,22,9,0.63) 100%);\r\n"
"  background: -webkit-gradient(radial, center center, 0px, center center, 100%, color-stop(0%,rgba(237,237,237,0)), color-stop(100%,rgba(61,22,9,0.63)));\r\n"
"  background: -webkit-radial-gradient(center, ellipse cover,  rgba(237,237,237,0) 0%,rgba(61,22,9,0.63) 100%);\r\n"
"  background: -o-radial-gradient(center, ellipse cover,  rgba(237,237,237,0) 0%,rgba(61,22,9,0.63) 100%);\r\n"
"  background: -ms-radial-gradient(center, ellipse cover,  rgba(237,237,237,0) 0%,rgba(61,22,9,0.63) 100%);\r\n"
"  background: radial-gradient(center, ellipse cover,  rgba(237,237,237,0) 0%,rgba(61,22,9,0.63) 100%);\r\n"
"  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#00ededed', endColorstr='#a13d1609',GradientType=1 );\r\n"
"  text-align: center;\r\n"
"  padding-top: 10%;\r\n"
"}\r\n"
"\r\n"
"footer {\r\n"
"  font-size: 12px;\r\n"
"  font-weight: bold;\r\n"
"  font-family: Helvetica, Arial, sans-serif;\r\n"
"  line-height: 1.6em;\r\n"
"  margin-top: 2%;\r\n"
"  color: #4b3324;\r\n"
"  text-shadow: 0 1px 0 #dab59c;\r\n"
"  filter: alpha(opacity=60);\r\n"
"  -moz-opacity: 0.6;\r\n"
"  -khtml-opacity: 0.6;\r\n"
"  opacity: 0.6;\r\n"
"  -moz-transition: all 0.4s;\r\n"
"  -webkit-transition: all 0.4s;\r\n"
"  -o-transition: all 0.4s;\r\n"
"  transition: all 0.4s;\r\n"
"}\r\n"
"\r\n"
"footer:hover {\r\n"
"  filter: alpha(opacity=100);\r\n"
"  -moz-opacity: 1;\r\n"
"  -khtml-opacity: 1;\r\n"
"  opacity: 1;\r\n"
"}\r\n"
"\r\n"
"footer a:link, footer a:visited {\r\n"
"  color: #7b1232;\r\n"
"  text-decoration: none;\r\n"
"  border-bottom: dotted 1px #aa214b;\r\n"
"}\r\n"
"\r\n"
"footer a:hover {\r\n"
"  color: #aa214b;\r\n"
"}\r\n"
"\r\n"
"footer a:active {\r\n"
"  top: 1px;\r\n"
"  position: relative;\r\n"
"}\r\n"
"\r\n"
"#enabled {\r\n"
"  margin-bottom: 2%;\r\n"
"}\r\n"
"\r\n"
"footer label {\r\n"
"  vertical-align: 6%;\r\n"
"  cursor: pointer;\r\n"
"}\r\n"
"\r\n"
".twitter-share-button {\r\n"
"  vertical-align: -15%;\r\n"
"  margin-right: -25px !important;\r\n"
"}\r\n"
"\r\n"
".logo {\r\n"
"  border-bottom: none !important;\r\n"
"  filter: alpha(opacity=30);\r\n"
"  -moz-opacity: 0.3;\r\n"
"  -khtml-opacity: 0.3;\r\n"
"  opacity: 0.3;\r\n"
"  padding: 15px;\r\n"
"  display: inline-block;\r\n"
"  -moz-transition: all .4s;\r\n"
"  -webkit-transition: all .4s;\r\n"
"  -o-transition: all .4s;\r\n"
"  transition: all .4s;\r\n"
"}\r\n"
"\r\n"
".logo:hover {\r\n"
"  filter: alpha(opacity=100);\r\n"
"  -moz-opacity: 1;\r\n"
"  -khtml-opacity: 1;\r\n"
"  opacity: 1;\r\n"
"}\r\n";
