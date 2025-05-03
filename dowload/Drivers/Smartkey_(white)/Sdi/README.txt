EUTRON

Internet : http://www.smartkey.eutron.com
Helpdesk email : helpdesk@eutron.com
Commercial email : info@eutron.com
Commercial phone : +39-035697080
Fax : +39-035697092


SMARTKEY DRIVER INSTALLATION
----------------------------

This package contains an installation library for the SmartKey drivers. This 
library can be used to install the SmartKey drivers with a simple function call.


FILES
-----

Sdi.exe
Sdiline.exe
	Simple visual and command line applications that use the library to 
	install the SmartKey drivers. 

skeyinst.dll
	Library for the automatic installation of the SmartKey drivers.

skeyinst-html.zip
skeyinst.chm
	Documentation of the skeyinst.dll library in CHM and HTML format.

skeyinst-is631.zip
skeyinst-is701.zip
	InstallShield 6.31 e 7.01 examples for the skeyinst.dll library.

skeyinst.bas
	VisualBasic interface for the skeyinst.dll library.

skeyinst.h
skeyinst.lib
	C interface for the skeyinst.dll library.

eugss2k.sys
eugssnt.sys
eugssxp.sys
eusk2par.sys
skeyusb.inf
skeyusb.sys
skeyusbnt.inf
skeyusbnt.sys
usbdrv.inf
usbdrv.sys
psapi.dll
	Files required for the SmartKey Drivers installation.


FEATURES
--------

For any driver the SDI tool allow three different operations:

* Install
Installation or upgrade of the driver.

* Uninstall
Uninstallation of the driver.

* Remove/Forced Uninstall
Force and complete removal of the driver to resolve erroneous install conditions.
This operation must not be used in normal conditions, but only to recover from
installation errors.
After this operation it's always required to reboot.