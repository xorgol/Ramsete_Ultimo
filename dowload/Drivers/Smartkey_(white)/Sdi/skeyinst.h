/** \file
 * SmartKey Driver Installation.
 *
 * To suggested way to install the SmartKey drivers is to simply call only the
 * required SkeyInstallPar(), SkeyInstallUSB() and SkeyInstallGSS2() functions.
 *
 * If a function fails with the error code SKEYINST_PROBE_INSTALL_BUSY you need
 * to ask at the user to close any other installation process and retry.
 * If a function fails with the error code SKEYINST_PROBE_FAIL and with 
 * GetLastError() equal at ERROR_ACCESS_DENIED (5) you need to ask at the user to 
 * became Administrator and restart the installation.
 * If a function fails with any other error code the installation is failed.
 * 
 * If a function returns with the code SKEYINST_OK, the operation is completed 
 * with success.
 * If a function returns with the code SKEYINST_WARNING_MUST_REBOOT, you must
 * reboot the system to complete the operation.
 * If a function returns with the code SKEYINST_WARNING_MUST_INSERT, you need
 * to ask at the used to insert the SmartKey to complete the process.
 *
 * You can eventually use the SkeyProbe() function to check the Not Administrator and
 * Busy conditions in advance.
 *
 * Please note that you don't need to check if a driver is already installed
 * before calling the Install() functions. If the driver is already installed and
 * updated these functions do nothing.
 * 
 */

#ifndef __SKEYINST_H
#define __SKEYINST_H

#ifdef __cplusplus
extern "C" {
#endif

/* Only for internal use */
#ifdef SKEYINST_EXPORTS
#define SKEYINST_LINK
#else
#define SKEYINST_LINK __declspec(dllimport)
#endif
#define SKEYINST_CALL __stdcall

/**
 * Installation of the USB driver.
 * All the required drivers for the USB SmartKey are installed.
 * On Windows NT the USB Phoenix stack is also installed.
 * \note
 * The files skeyusb.inf, skeyusbnt.inf, skeyusb.sys, skeyusbnt.sys and usbdrv.sys must reside in the same directory of the DLL.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyInstallUSB(void);

/**
 * Installation of the Parallel driver.
 * All the required drivers for the Parallel SmartKey are installed.
 * If in the current operating systen no driver is needed, nothing is done and the function returns with success.
 * The driver is started as "Automatic". If you need to use the SmartKey in a Windows Service, you must add a 
 * dependency on the eusk2par driver, to prevent the service to start before the SmartKey driver.
 * \note
 * The file eusk2par.sys must reside in the same directory of the DLL.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyInstallPar(void);

/**
 * Installation of the GSS 2 (eugss*.sys) driver.
 * All the required drivers for the GSS2 SmartKey are installed.
 * If in the current operating systen no driver is needed, nothing is done and the function returns with success.
 * \note
 * The files eugss*.sys and psapi.dll must reside in the same directory of the DLL.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyInstallGSS2(void);

/**
 * Uninstallation of the USB driver.
 * The previous installed USB drivers are uninstalled. 
 * If no driver is installed nothing is done and the function returns with success.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyUnInstallUSB(void);

/**
 * Uninstallation of the Parallel driver.
 * The previous installed Parallel drivers are uninstalled.
 * If no driver is installed nothing is done and the function returns with success.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyUnInstallPar(void);

/**
 * Uninstallation of the GSS 2 (eugss*.sys) driver.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyUnInstallGSS2(void);

/**
 * Forced uninstallation of the USB driver.
 * The driver is uninstalled with force removing any reference on the filesystem and registry.
 * \note Use only in extreme cases to recover from wrong installation.
 * \note After a forced uninstallation you MUST always reboot.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyForceUnInstallUSB(void);

/**
 * Forced uninstallation of the Parallel driver.
 * The driver is uninstalled with force removing any reference on the filesystem and registry.
 * \note Use only in extreme cases to recover from wrong installation.
 * \note After a forced uninstallation you MUST always reboot.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyForceUnInstallPar(void);

/**
 * Forced uninstallation of the GSS 2 (eugss*.sys) driver.
 * The driver is uninstalled with force removing any reference on the filesystem and registry. 
 * \note Use only in extreme cases to recover from wrong installation.
 * \note After a forced uninstallation you MUST always reboot.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyForceUnInstallGSS2(void);

/**
 * Get the last Windows error code.
 * \return the last Windows error code like the GetLastError() function.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyGetLastError(void);

/** \name Probing
 * Probing codes used with the SkeyProbe function.
 */
/*@{*/
/** 
 * Check if the USB driver is installed.
 * This command doesn't check if the correct driver is installed, but only if 
 * a generic driver connected at the token is installed. 
 * If the user install manually the "Windows Null Driver", this function reports that a driver is installed.
 */
#define SKEYINST_PROBE_USB_INSTALLED 1

/** 
 * Check if the USB driver is active. 
 */
#define SKEYINST_PROBE_USB_RUNNING 2

/**
 * Return the version of the installed USB driver.
 * The version number is a 4 byte code packed in a DWORD value.
 */
#define SKEYINST_PROBE_USB_VERSION 13

/**
 * Check if the USB driver is available for installing.
 */
#define SKEYINST_PROBE_USB_AVAILABLE 16

/** 
 * Check if the Parallel driver is installed. 
 */
#define SKEYINST_PROBE_PARALLEL_INSTALLED 3

/**
 * Check if the Parallel driver is active. 
 */
#define SKEYINST_PROBE_PARALLEL_RUNNING 4

/**
 * Return the version of the installed Parallel driver.
 * The version number is a 4 byte code packed in a DWORD value.
 */
#define SKEYINST_PROBE_PARALLEL_VERSION 14

/**
 * Check if the Parallel driver is available for installing.
 */
#define SKEYINST_PROBE_PARALLEL_AVAILABLE 17

/**
 * Check if the GSS 2 driver is installed.
 */
#define SKEYINST_PROBE_GSS2_INSTALLED 11

/**
 * Check if the GSS 2 driver is active.
 */
#define SKEYINST_PROBE_GSS2_RUNNING 12

/**
 * Return the version of the installed GSS 2 driver.
 * The version number is a 4 byte code packed in a DWORD value.
 */
#define SKEYINST_PROBE_GSS2_VERSION 15

/**
 * Check if the GSS 2 driver is available for installing.
 */
#define SKEYINST_PROBE_GSS2_AVAILABLE 18

/**
 * Check if the Windows Installer is busy.
 * Until the Windows Installer is busy you cannot call any other function.
 */
#define SKEYINST_PROBE_INSTALL_BUSY 9

/** 
 * Check if the current user has the Administrator permission.
 * In Windows 9x it always returns TRUE.
 */
#define SKEYINST_PROBE_ADMINISTRATOR_PERMISSION 10

/*@}*/

/**
 * Probe for a driver status information.
 * \param Code A SKEYINST_PROBE_* code.
 * \param Found Output variable. This variable is set only if SKEYINST_OK is returned.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyProbe(DWORD Code, DWORD* Found);

/**
 * Select the log file to use.
 * If you specify a log file, when you call one of the install or uninstall functions
 * a very detailed report of all the operations is generated. 
 * This report can be used to debug problematic installation cases.
 * \param Path Complete path of the log file. Use NULL to disable it.
 * \return A SKEYINST_* code.
 */
SKEYINST_LINK DWORD SKEYINST_CALL SkeyLogFile(const char* Path);

/** \name Error
 * Error codes returned.
 */
/*@{*/

/** 
 * Another installation is in progress. 
 * You must ask at the user to complete any installation process in progress and then retry.
 *
 * A good behaviours is:
 *  - Try the first time
 *  - Wait 5 seconds and retry
 *  - Ask the user to complete and to close any installation window and retry
 *  - Repeat the last step
 *
 * Note that the Windows XP tooltip, shown on the lower right corner of the screen 
 * after an hardware installation, must be closed because is part of the installation 
 * process.
 */
#define SKEYINST_ERROR_WAIT -3 

/** 
 * This operation is unsupported in this operating system.
 * You can't call the function in this operation system.
 */
#define SKEYINST_ERROR_UNSUPPORTED -2 

/**
 * Generic failure.
 * The operation is failed for a generic error. You can call the SkeyGetLastError() function 
 * to get the Windows error code. 
 * If an install operation is done without the Administrator rights the SkeyGetLastError()
 * function returns the value 5 (ERROR_ACCESS_DENIED).
 */
#define SKEYINST_ERROR_FAIL -1 

/**
 * Operation completed successfully.
 */
#define SKEYINST_OK 0

/**
 * Operation completed successfully, but you must reboot to complete the operation.
 * This code is generally returned after the forced uninstallation.
 */
#define SKEYINST_WARNING_MUST_REBOOT 1

/**
 * Operation completed successfully, but you must insert the token to complete the operation.
 * This code is generally returned after the installation of the USB Driver on Windows 9x/Me/2000/XP.
 */
#define SKEYINST_WARNING_MUST_INSERT 2

/*@}*/

#ifdef __cplusplus
}
#endif

#endif