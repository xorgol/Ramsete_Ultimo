Attribute VB_Name = "GLOBAL"

'EUTRON: "SMARTKEY" program. Globals variables.

'
' Installation of the USB driver.
' All the required drivers for the USB SmartKey are installed.
' On Windows NT the USB Phoenix stack is also installed.
' \note
' The files skeyusb.inf, skeyusbnt.inf, skeyusb.sys, skeyusbnt.sys and usbdrv.sys must reside in the same directory of the DLL.
' \return A SKEYINST_* code.
'
Declare Function SkeyInstallUSB Lib "skeyinst.dll" () As Long

'
' Installation of the Parallel driver.
' All the required drivers for the Parallel SmartKey are installed.
' If in the current operating systen no driver is needed, nothing is done and the function returns with success.
' \note
' The file eusk2par.sys must reside in the same directory of the DLL.
' \return A SKEYINST_* code.
'
Declare Function SkeyInstallPar Lib "skeyinst.dll" () As Long

'
' Installation of the GSS 2 (eugss*.sys) driver.
' All the required drivers for the GSS2 SmartKey are installed.
' If in the current operating systen no driver is needed, nothing is done and the function returns with success.
' \note
' The files eugss*.sys must reside in the same directory of the DLL.
' \return A SKEYINST_* code.
'
Declare Function SkeyInstallGSS2 Lib "skeyinst.dll" () As Long

'
' Uninstallation of the USB driver.
' The previous installed USB drivers are uninstalled.
' If no driver is installed nothing is done and the function returns with success.
' \return A SKEYINST_* code.
'
Declare Function SkeyUnInstallUSB Lib "skeyinst.dll" () As Long

'
' Uninstallation of the Parallel driver.
' The previous installed Parallel drivers are uninstalled.
' If no driver is installed nothing is done and the function returns with success.
' \return A SKEYINST_* code.
'
Declare Function SkeyUnInstallPar Lib "skeyinst.dll" () As Long

'
' Uninstallation of the GSS 2 (eugss*.sys) driver.
' \return A SKEYINST_* code.
'
Declare Function SkeyUnInstallGSS2 Lib "skeyinst.dll" () As Long

'
' Forced uninstallation of the USB driver.
' The driver is uninstalled with force removing any reference on the filesystem and registry.
' \note Use only in extreme cases to recover from wrong installation.
' \note After a forced uninstallation you MUST always reboot.
' \return A SKEYINST_* code.
'
Declare Function SkeyForceUnInstallUSB Lib "skeyinst.dll" () As Long

'
' Forced uninstallation of the Parallel driver.
' The driver is uninstalled with force removing any reference on the filesystem and registry.
' \note Use only in extreme cases to recover from wrong installation.
' \note After a forced uninstallation you MUST always reboot.
' \return A SKEYINST_* code.
'
Declare Function SkeyForceUnInstallPar Lib "skeyinst.dll" () As Long

'
' Forced uninstallation of the GSS 2 (eugss*.sys) driver.
' The driver is uninstalled with force removing any reference on the filesystem and registry.
' \note Use only in extreme cases to recover from wrong installation.
' \note After a forced uninstallation you MUST always reboot.
' \return A SKEYINST_* code.
'
Declare Function SkeyForceUnInstallGSS2 Lib "skeyinst.dll" () As Long

'
' Get the last Windows error code.
' \return the last Windows error code like the GetLastError() function.
'
Declare Function SkeyGetLastError Lib "skeyinst.dll" () As Long

' \name Probing
' Probing codes used with the SkeyProbe function.
'
'
' Check if the USB driver is installed.
' This command doesn't check if the correct driver is installed, but only if
' a generic driver connected at the token is installed.
' If the user install manually the "Windows Null Driver", this function reports that a driver is installed.
'
Global Const SKEYINST_PROBE_USB_INSTALLED = 1

'
' Check if the USB driver is active.
'
Global Const SKEYINST_PROBE_USB_RUNNING = 2

'
' Check if the Parallel driver is installed.
'
Global Const SKEYINST_PROBE_PARALLEL_INSTALLED = 3

'
' Check if the Parallel driver is active.
'
Global Const SKEYINST_PROBE_PARALLEL_RUNNING = 4

'
' Check if the GSS 2 driver is installed.
'
Global Const SKEYINST_PROBE_GSS2_INSTALLED = 11

'
' Check if the GSS 2 driver is active.
'
Global Const SKEYINST_PROBE_GSS2_RUNNING = 12

'
' Check if the Windows Installer is busy.
' Until the Windows Installer is busy you cannot call any other function.
'
Global Const SKEYINST_PROBE_INSTALL_BUSY = 9

'
' Check if the current user has the Adminitrator permission.
' In Windows 9x it always returns TRUE.
'
Global Const SKEYINST_PROBE_ADMINISTRATOR_PERMISSION = 10


'
' Probe for a driver status information.
' \param Code A SKEYINST_PROBE_* code.
' \param Found Output variable. This variable is set only if SKEYINST_OK is returned.
' \return A SKEYINST_* code.
'
Declare Function SkeyProbe Lib "skeyinst.dll" (ByVal Code As Long, ByRef Found As Long) As Long

'
' Select the log file to use.
' If you specify a log file, when you call one of the install or uninstall functions
' a very detailed report of all the operations is generated.
' This report can be used to debug problematic installation cases.
' \param File Complete path of the log file. Use NULL to disable it.
' \return A SKEYINST_* code.
'
Declare Function SkeyLogFile Lib "skeyinst.dll" (ByVal Path As String) As Long

'
' Error codes returned.
'

'
' Another installation is in progress.
' You must ask at the user to complete any installation process in progress and then retry.
'
' A good behaviours is:
'  - Try the first time
'  - Wait 5 seconds and retry
'  - Ask the user to complete and to close any installation window and retry
'  - Repeat the last step
'
' Note that the Windows XP tooltip, shown on the lower right corner of the screen
' after an hardware installation, must be closed because is part of the installation
' process.
'
Global Const SKEYINST_ERROR_WAIT = -3

'
' This operation is unsupported in this operating system.
' You can't call the function in this operation system.
'
Global Const SKEYINST_ERROR_UNSUPPORTED = -2

'
' Generic failure.
' The operation is failed for a generic error. You can call the SkeyGetLastError() function
' to get the Windows error code.
' If an install operation is done without the Administrator rights the SkeyGetLastError()
' function returns the value 5 (ERROR_ACCESS_DENIED).
'
Global Const SKEYINST_ERROR_FAIL = -1

'
' Operation completed successfully.
'
Global Const SKEYINST_OK = 0

'
' Operation completed successfully, but you must reboot to complete the operation.
' This code is generally returned after the forced uninstallation.
'
Global Const SKEYINST_WARNING_MUST_REBOOT = 1

'
' Operation completed successfully, but you must insert the token to complete the operation.
' This code is generally returned after the installation of the USB Driver on Windows 9x/Me/2000/XP.
'
Global Const SKEYINST_WARNING_MUST_INSERT = 2
