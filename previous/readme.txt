IMPORTANT NOTICE
Ramsete 2.7 requires that the Regional Settings, 
in Your Windows Control Panel, are set to English mode 
(either USA or UK). Never use locale settings which employ 
a decimal separator different from the dot (for example,
Italian, which employs the comma). We strongly recommend 
that You explicitly define Your locale setting to English-UK 
or English-USA, because this way also the date and time 
functions are properly formatted.
This is the price to pay for transparent connection with 
other programs (such as Excel) through simple ASCII data 
files, which can be edited and modified without particular 
care - remember that ALL the Ramsete files (.RAY, .SPK, 
.MAT, .__A, .@_A, .DAT, .GRD) are plain-text ASCII files, 
they can be opened and modified with Notepad or any other 
text editor.

ADVICE FOR USERS WHO DO NOT HAVE SURFER INSTALLED
Ramsete 2.7 is designed for working together with Surfer (TM), 
from Golden Software, a powerful contour mapping software. 
Most acousticians already have Surfer and use it for mapping 
the results of experimental measurements, so Ramsete defaults 
to "use Surfer" enabled in its Mapping Options window.
But if Surfer (version 7 or higher) is not installed on the 
computer, an error message saying "Active-X component not 
found" appears when attempting to compute the Dithered or 
Contour maps. If this is your case, please install Surfer, 
or simply disable the "Use Surfer" option.

*********************************************************

README.TXT for Ramsete 2.70
2.70 (Ramsete II - full version)
1.70 (Ramsete Classic, please notice that this version has been 
      renumbered, as the previous one was 1.90)
0.70 (Ramsete Lite)
This is the latest complete package release after Ramsete 2.50
and the never-completed Ramsete 2.60
The most evident differences are:
- Source Manager: the program now can import CLF files and convert
them to standard SPK files for Ramsete. A free software tool for 
managing CLF files can be found here: http://www.clfgroup.org/
The CLF file format is the new standard format for defining loudspeaker
directivity and power - all serious loudspeaker manufacturers release
directivity data for their products in the standard CLF format.
- Ramsete View: a lot of bug fixes, the program now directly exports 
impulse responses in WAV format (Audio Converter is not employed 
anymore)
- Ramsete CAD: fixed DXF import/export, a summary of the materials
emploed is saved at the end of the RAY file, so if the file is given
to another user, without passying him also the Ramsete.mat file, he
can still update his own Material.mat with the material
properties embedded in the RAY file. Manual editing of the
Ramsete.mat file is needed for accomplishing this task...
- Ramsete Tracer: fixed the algorithm for multiple diffractions around
free edges of panels, now all the possible paths are correctly found
- Material Manager: the scattering coefficient is now properly
labelled, according to the ISO 17497 standard
- Convolver: this module has been suppressed, as nowadays almost any
wave editor includes a convolution tool. Alternatively the Aurora plugins
provide a very power convolution tool (www.aurora-plugins.com).
Free convolution programs can be found here:
http://www.catt.se/download_area.htm#Gratis
- Audio Converter: also this module has been suppressed, as the conversion 
to WAV files is now performed directly inside Ramsete View, and noone is
currently using the old MLSSA format anymore...


README.TXT for Ramsete 2.50
2.50 (Ramsete II - full version)
1.50 (Ramsete Classic, please notice that this version has been 
      renumbered, as the previous one was 1.90)
0.50 (Ramsete Lite)
This is the first complete package release after Ramsete 2.10
and the never-completed Ramsete 2.20
The most evident differences are:
- Source Manager now can import also CLF loudspeaker files
- the setup package is now freely downloadable from everyone
  (no password protection)
- all modules now work also without a dongle (hardware protection 
  key) in "demo mode", with reduced accuracy and limited range 
  of "advanced" functions, corresponding to the "Ramsete Lite"
  version.
- the "protection" of the executables has been significantly
  reduced: the presence of the dongle is checked only at the
  start of each program, and the program continues to work if
  the dongle is subsequently removed - this allows, for example,
  to run parallel sessions of Ramsete on several machines
  employing a single dongle....
- drivers for Eutron dongles (either parallel or USB) are now 
  available from within the Ramsete setup package - remember to
  install these drivers before attempting to employ your dongle.
- for outdoors calculations, now Ramsete can deal with diffractions
  of infinite order, and can process a complex ground geometry 
  (only for people who purchased the "external features" option)
- New, simplified help files are provided in MHT format - you need
  to have your internet browser configured for displaying correctly
  MHT files for being able to show the contents of these help files.
- Ramsete CAD is now equipped with an easier interface for 3D 
  navigation in "solid rendering" mode
- dozens of bugs solved and new features added, juts explore the 
  modules for discovering them...

README.TXT for Ramsete 2.20 beta (1.90 with old Hardlock dongle)
This is a "beta" release never arrived to completion and
final release. It mostly contains bug fixes of all the modules.
The major features added are the following:
- support for Surfer v. 8.xx (the support for Surfer 6.xx has 
  been dropped)
- Audio Converter has now also binaural rendering option,
  employing the MIT Kemar HRTF database
- DXF input and output compatible with Autocad 2004
- visual rendering option in Ramsete CAD

README.TXT for Ramsete 2.10 (1.80 with old Hardlock dongle)
These features were added:
- Import of CATT directivity files (SD0 and SD1), if in ASCII 
  (.TXT)format
- Import of newer EASE directivity files, if in ASCII format.
- Tested compatibility with Windows XP and Windows Vista 
  (remember to install also the new drivers for Your dongle)
- Support for the new USB Smartkeys from Eutron (for computers 
  not equipped with the parallel port)
- Bug fixes in Ramsete CAD, Ramsete View and Source Manager
- The Sources data-base now contains also the directivity
  balloons of several musical instruments (measured by Ingolf 
  Bork at the PTB, Germany)
- The Rooms data-base now contains the input data files for the 
  latest PTB Round Robin (Phase I, II and III)

README.TXT for Ramsete 2.1 RC 2/3/4 (1.8 with old Hardlock dongle)
These Release Candidates contain minor bug fixes. These fixes 
regard three modules:
- Ramsete View: all the DXFIN and DXFOUT capabilities are now 
working as in the previous versions. This should solve any 
backward compatibility issues, and the Ramsete CAD DXFIN and 
DXFOUT modules are now the unpreferred solution for interfacing 
with AutoCAD. Fixed the problem which locked the program when 
attempting to sum the results of separate source computations.
- Tracing DLL: fixed a bug which affected complex geometries of 
closed rooms containing screens (obstructing surfaces).
- Dongler: now the registration of the new Smartkey dongle 
(for newly purchased Ramsete copy) can be done quickly and 
easily, and in case of error the dongle does not refuse anymore 
other programming attempt.

README.TXT for Ramsete 2.0 (1.7 with old Hardlock dongle)
Many substantial improvements are:
- New Visual Basic 6 / Visual C 6 recompile of everything
- The Ramsete Graph module disappeared
- The impulse response and Schroeder plot can now be displayed 
  within Ramsete View
- The path of each reflection can now be graphically displayed 
  and linked to the impulse response value (not available in 1.7)
- The CAD now includes advanced DXF in and out and powerful 
  functions for selective selection of objects (not available in 1.7)
- The Source manager is capable of graphical input of polar 
  plots, and interpolation of measured ones (not available in 1.7)
- A geometry can be attached within each SPK (source) file. 
  The materials are usually declared monopermeable in this case, 
  so that the rays come out through the source geometry.
- The summation of separate source results can now be done within 
  Ramsete View, with optional equalisation and delay
- Surfer 7 is fully supported
- AutoCAD 2000 is supported in both ways
- A new real-time convolver is included for auralization. 
  At 44.1 kHz it is even capable of real-time convolution 
  with simultaneouss playback.
- The program is now fully indipendent of the installation directory. 
  Long names with spaces are supported.
- A completely new tracing launcher is supplied, with simplified 
  interface.
- The full help files are not available yet, but the programs 
  support dynamic link to HTML pages which will substitute the help files.
Many other improvements were made. The user is redirected to the 
Ramsete web site for up-to-date info (www.ramsete.com).
Plase note, this release can be considered a "release candidate", 
it will be followed by the final release of Ramsete 2 in a few weeks.
The users are suggested to report to the author any malfunctioning 
or bug (Mailto:farina@unipr.it).


README.TXT for Ramsete 1.65
The program which was subject to larger modification was Source 
Manager. Some minor bugs were fixed, which prevented the program 
to run on some computers. Furthermore, new functionality was added 
for managing incorporated geometry within source files. Now it is 
possible to append a RAY geometry within an SPK file, with the new 
menu item File - Attach Geometry. Furthermore, it is possible to 
display the attached geometry with the new item View - Geometry. 
The RAY geometry can be attached also during the definition of a 
new source with the ISO3744 module. Now, selecting an User number 
of microphones, it is possible to load a geometrical description 
of the source surrounded by microphones also from a RAY file 
(although the previous MEA files are still supported). Please 
note that this is the only case in which it makes sense to include 
microphones in the RAY file to be attached. Note also that the 
ISO3744 module does not displays the actual geometry, but only 
the surrounding enveloping surface: nevertheless, the actual 
geometry of the source can be displayed after the ISO3744 module 
is finished.
In the imported RAY file, the source number 1 is assumed to define 
the acoustic center of the geometry. If no source was included in 
the RAY file, the acoustic center is assumed to be in the origin. 
The source main axis is always aligned with the geometry's X axis, 
so the RAY file must be prepared accordingly. There is no way to 
manipulate the geometry from within the  Source Manager.
Please, be careful in assigning the Obstructing and Monopermeable 
flags for the surfaces drawn inside the RAY file. Usually, a sound 
source is surrounded by surfaces which are Monopermeable (so the 
rays can escape outside) but are not Obstructing. If they are 
declared obstructing, the Sound Reduction Index R of the materials 
affect the energy transmission through the enclosure.
The effective computation done by the Pyramid Tracer with 
incorporated geometries surrounding the source has not been 
carefully tested yet. So the users are requested to report 
promptly malfunctions or counter-intuitive behaviour of these 
new functionalities.
Ramsete CAD was checked, and it displays correctly the 
incorporated geometry: the tracing DLL is instead still to be 
checked in all possible cases, but it was verified that the 
monopermeable surfaces DO NOT WORK outdoors: the pyramid pass 
through only when, in its subsequent path, it finds another 
surface outside the enclosure surrounding the source. This bug 
will be fixed soon.

README.TXT for Ramsete 1.64
The only relevant modification made after the previous version is 
in the tracing DLL (RTDLL32.DLL), as there was a bug which caused 
the pyramids to escape out from closed geometries made up of 
obstructing faces. Now the pyramids escape only if the material 
is assigned to be "monopermeable", which means that they describe 
the outer shape of a sound source. Please note that this makes 
sense only when the encapsulated source is inside another 
completely enclosed box, not outdoors.

Please notice this very important fact:
A sound source encapsulated inside a box of obstructing, 
monopermeable materials radiates pyramids whose energy is reduced 
by the values of R (sound insulation index) assigned to the 
obstructing surfaces. This means that it is NOT CORRECT to employ 
for these surfaces the "true" value of the sound reduction index R, 
but instead You need to assign R values corresponding to the 
insertion loss (IL) values of the enclosure. These can be 
significantly lower than the "true" R values, as the IL is reduced 
due to the increase of SPL inside the enclosure caused by internal 
reverberation. Please note also that the absorption coefficients of 
the enclosure have to be those of the external surface of it, the 
internal surface (usually highly absorbing) is not taken into 
account at all (the pyramids do not make multiple reflections INSIDE 
the monopermeable box, they come out at the first hit)
****

README.TXT for Ramsete 1.63
The following modules were updated since v. 1.62: 
- Ramsete CAD: fixed a bug in the assignment of materials to surfaces 
which occurred when there were empty lines in the Ramsete.Mat file, 
causing assignement of the wrong material.
- Ramsete View: fixed the mouse behaviour during drawing of Blanking 
Lines for Surfer (TM); fixed the problem in reading the values of Alfa 
and Beta from Ramsete.ini, which occurred if no space was inserted 
between the equal sign (=) and the values - this caused improper tail 
correction, and thus wrong values of SPL and reverberation time.
- MultiLauncher: fixed a bug which prevented the value of Time to be 
saved in the Ramsete.ini file.
- All VB executables (Source Manager, Ramsete View, Multi Launcher, 
Material Manager and Audio Converter) now check for the decimal dot 
being correctly assigned to "." - If this is not true, a message box 
warns the user to set the regionals settings to US English or UK English.


README.TXT for Ramsete 1.62
Ramsete 1.62 contains two important updates, regarding the Ramsete CAD and the pyramid
tracing modules. In Ramsete CAD, an annoying bug was fixed, which caused the improper
association of material number to surfaces. Some other minor improvement was done, as
the new feature for checking the existence of double faces (faces which were drawn twice).
In the Pyramid Tracing module, the detection of edges was ameliorated: now this error is
much less frequent, and when it happens, if the "save escaped rays" option is enabled, 
in the ESCAPED.RAY file not only a line is drawn for each escaped ray, but also a
little circle with an incoming short ray is drawn for each egde error occurred.
This makes it easy to locate the geometrical singularities which are causing the edge
errors (typically overlapped surfaces), and to resolve them by modifying the geometry.
Edge errors are slowing down the program, and in some cases they can substantially 
alterate the spatial and temporal distribution of reflected rays.


README.TXT for Ramsete 1.61
The only difference from Ramsete 1.6 is in the Audio Converter module, now updated
to v. 3.1. In fact, there was a bug in the conversion from Ramsete to WAV or TIM 
files, which caused the conversion program to read the content of the ramsete.ini
file from the directory C:\ramsete, instead of the directory where Ramsete 1.6 was
installed. This was fixed now.

README.TXT for Ramsete 1.6
- Ramsete 1.6 fixed many bugs which were discovered in Ramsete 1.5. The biggest
one was about the implementation of the Kurze formula for screen attenuation.

- Ramsete 1.6 was checked and runs perfectly also under NT-4, WIN-98SE and Win2000.
Remember to load the proper Hardlock drivers for having the dongle recognized... 
(look in HTTP://www.ramsete.com/ramsete for latest Hardlock drivers, or directly 
on HTTP://www.hardlock.com).

- Now Ramsete can be installed in any directory of the hard disks. Most programs
accept long names, even with spaces, with the exclusion of Ramsete Graph 
(this is the only module which is still 16-bits). 

- On some systems, Ramsete Graph refuses to run (square root of negative number) - 
this is not a fault of Ramsete Graph, it depends on some conflicting software which
resides in memory - in many cases it was reported a conflict with the oldest version
of the MS Wheel Mouse driver. For locating the offending software, press Control-Alt-Canc
and look at the list of running tasks. Then start ending one of the tasks, and try again 
Ramsete Graph. Do this until You find the conflicting software. Then You need to uninstall
it, for avoiding future conflicts. Remember that for better performance it is not a good
idea to leave many tasks active in the background: they take up memory, slow the response
and can cause conflicts (as above). In a properly configured Win98 system, only these two
tasks should be always running: Explorer and Systray - All other are superfluous.

- Ramsete now requires a registered user's name and reg.key number for working. 
The users who do not have their registration up-to-date, need to ask to the author 
a new reg.key, by sending an E-Mail request to farina@pcfarina.eng.unipr.it. 
These infos have to be inserted in the first two rows in the ramsete.ini file.

- The AlfaBeta module is now a window under Ramsete View (under the File menu), 
it is no more a separate self-standing application.
- The SourceManager program now can import the latest EASE loudspeaker files (in their 
ASCII version), and can interpolate directivity balloons directly from MLSSA polar
plot measurements. Some input files are included as samples.
- The ISO3744 module of SourceManager now can read directly multispectra measured
with the B&K 2260 analyzer, and exported through the B&K Evidence or Investigator
softwares.
- Many new features in Ramsete CAD for selective selection of materials, sources
and receivers. Ramsete CAD is substantially totally new, so it was provided a sort 
of HTML documentation as user's Manual (in Italian).

README.TXT for Ramsete 1.5
- Ramsete 1.5 is now almost completely native Win32-bit, and thus runs only
under  Windows95, Windows98 or NT.
- Warning for NT users: the hardlock protection requires proper installing
of the NT Hardlock Drivers. Look inside DRIVERS.ZIP for instructions
- Improved speed and reliability of all modules.
- The new Ramsete CAD has new drawing capabilities for circular gradons and
sloping faces.
- Ramsete View now makes use directly of the mapping capabilities of Surfer 6.
It is obviously required that Surfer 6 is properly installed BEFORE using 
Ramsete 1.5

README.TXT for Ramsete 1.4
Ramsete 1.4 presents some new features, and the fixing of many known
bugs. Let we start from the latters:
- fixed the automatic sum of the results with many sources (Save All
not checked)
- fixed problems with the DOS extender of the tracer, which is now a 
native 32-bits Windows DLL, and thus runs in a graphical window.
- fixed the problems with rectangular rooms, thanks to the new diffusion
parameter (randomize after). It express the number of specular ref-
lections, after which the pyramid begin to be reflected in random 
directions instead of the specular one. It is recommended that this
parameter is set to a value between 3 and 10.

These are the new features:
- New program AlfaBeta.exe for optimizing the choice of the tail
correction parameters Alfa and Beta in not-Sabinian spaces. It is
required that two different computations are made with exactly the
same geoemtry (just copy the .RAY file and start twice the computation),
with the only difference of launching a very different number of 
pyramids (say 1024 and 32768). Just one source and a few receivers are
needed, so that the computation is fast even with so many pyramids.
AlfaBeta is used to compare the impulse responses or the Schroeder
plots obtained from the two simulations. Alfa and Beta can be changed
interactively, and their effect on the tail correction can be observed 
directly. They have to be set so that the graphs of the two computations
are as similar as possible in the useful range of the decay.
- Improved speed of the tracer (almost 400% on a Pentium Pro or Pentium II).
- It is now possible to save an ascii file, with extension .@_A, containing
informations about the trajectory of the rays. This will be very useful
in the next future, for displaying the ray paths within Ramsete View.
- A Ramsete.log ASCII file is produced during the working of the tracer,
it contains info about any error ebcountered by the program.
- It is possible to save the rays which escape out from the geometry. 
An Escaped.ray file is generated, which can be merged inside Ramsete CAD
for displaying the rays which are coming out from missing faces or from
holes in the drawing. This, obviously, makes no sense for outdoor cases.


README.TXT for Ramsete 1.3
Ramsete 1.3 presents some new features, and the fixing of many known
bugs. Let we start from the latters:
- fixed the problem with Sound Reduction Index of windows and doors,
  which was not substituted to the R value of the wall, but added.
- fixed the problem of incorrect tail correction of summed files in
  Ramsete Graph, which caused different values of SPL to be display-
  ed in comparison with Ramsete View
- fixed the incorrect computation of LE and LF values in A-weighted
  and LIN bands. Fixed also the missing computation of LE values in
  Ramsete View.
- The file format of the compressed result files (.-*) is now more
  simple and efficient, and makes it easier to import the results in
  spreadsheets.
- The computation of T60 has been removed, because many users tended
  to look at this value for the "reverberation time" to be compared
  with experimental results, while in practice it is impossible to
  measure the reverberation time over a 60-dB decay range.
- The air absorption algorithm has been revised, and now causes less 
  air absorption at high frequency.

Some known bugs are still present:
- if the last material in the material data base contains R values,
  the tracer hangs.
- many acoustical parameters are wrong if the time resolution 
  ("precision") is set to values greater than 0.01 s.
- the tail correction algorithm can produce artifacts in the case of
  very simple geometries (i.e., an ampty rectangular room), due to
  flutter echo phoenomena which are theoretically correct in the
  hypothesis of specular reflections, but which are usually not 
  present in the reality due some degree of diffusion or scattering
  of the high-order reflections. A fix of this bug is scheduled for
  february 1997, with the introduction of a diffusion algorithm.
- The tail correction parameters Alfa and Beta, which are located in
  the RAMSETE.INI file, need to be adjusted properly in the case of
  non-Sabininan sound fields; no self-calibration utility is actually
  provided, and most users simply do not have a knowledge of theoretical
  acoustics deep enough for making them able to properly adjusting
  these parameters. An "Instruction Page" about this point will be
  posted on the Ramsete WWW site (HTTP://pcfarina.eng.unipr.it/ramsete)
  at the beginning of 1997.

Here it is the list of the new improvements:
- New multiple diffraction algorithm; Ramsete now can take into account
  also second-order diffractions, which are important for studying
  thick sound barriers, or finite-sized obstacles such as buildings.
  This makes Ramsete the only ray-tracing program which can be used
  in indoor-to-outdoor studies and vice-versa. Furthermore, the outdoor
  capabilities are largely improved with this new option, which was
  originally developed for the study of the road and railway noise in
  urban areas.
- The maximum number of receivers is now 4096.
- The tracer can generate also auxiliary files, containing the "lost
  rays" and the single arrivals of energy on the receivers.
- The complete lists of command-line parameters is shown launching
  the tracer from the DOS prompt without any parameter (RTWAT.EXE).
- The computation speed has been improved on Pentium machines, thank
  to the new optimisation available in the Watcom C++ compiler.

*** Warning ***
The modifications made to the program are actually not reflected into
the manual, which still refers to Ramsete 1.0. This is particularly
problematic for the new users, which find an user's interface different
from the one depicted in the manual. Furthermore, the computation 
results can be different in many cases, and particularly for the DEMO
example described in the manual. 

README.TXT for Ramsete 1.2
Ramsete 1.2 comes with a sophisticated self-setup program, that
automatically decompress all the files and places them in proper
subdirectories.
If an old \RAMSETE directory exists, it is renamed as \RAMSETE.OLD
and no old file is lost. The user have then to manually move the
working files on the new RAMSETE directory, eventually destroying
the old one with its old executables to clean up disk space.

However, RAMSETE make use of some .PIF files, that are copied in
Your WINDOWS directory. In some circumstances these files need
to be manually adjusted, using PIFEDIT.EXE

The .PIF files used by Ramsete are the following:
GRIDBAT.PIF    - used during Surfer Dithering in Ramsete View
GRIDW.PIF      - used when launching GRID from Ramsete View - Surfer menu
M_LAUNCH.PIF   - used when launching multiple copies of the tracer
PLOTW.PIF      - used when launching PLOT from Ramsete View - Surfer menu
RTWAT.PIF      - this is the most important, enabling the tracer to run!
SETPLOT.PIF    - used when configuring the PLOT device from Ramsete View
                 (Never Required, and very dangerous!)
SURF.PIF       - used when launching SURF from Ramsete View - Surfer menu
TOPOPLOT.PIF   - used during Surfer Contour Mapping in Ramsete View
TOPOW.PIF      - used whem launching TOPO from Ramsete View - Surfer menu

You need to adjust the start-up directory in the .PIF files if You
installed Ramsete on a drive different from the one which contains WINDOWS;
in fact, in the .PIF files usually the start-up directory is named
\RAMSETE (without leading drive letter), and this works when both
Windows and Ramsete are on the same drive (for example C:).
When Windows is on a drive (ex. C:) and Ramsete on a different one
(ex. D:), You must manually edit the .PIF files to ensure that the
startup directory contains the drive letter specification (for
example D:\RAMSETE).

As a quick alternative (but not safe as the previous one), You can
simply move the previously listed .PIF files into the Ramsete directory

The same problem occurs if You try to work on data files located on a drive
different from the one which contains Ramsete: You cannot develop Your
project on a directory on drive D:, if Ramsete is installed on drive C:.
You can overcome partially this problem by making the proper modifications
to the .PIF files, but it is always recommended that Your project files are
located in a subdirectory of the \RAMSETE directory.

Last note:
remember that all Ramsete files (.RAY, .__A, .-_A) are full ASCII,
self documented files. When You have to do some strange task (for example,
changing every occurence of material #87 with material #164 in a .RAY file)
it is usally far more efficient to do it by a text editor (as Windows Write)
than using the Ramsete graphical interface. The result files (impulse
responses, acoustical parameters) can be easily imported in a Spreadsheet
(Excel) by reading directly the .__A and .-_A files, in a much more efficient
way than using the clipboard inside Ramsete Graph or Ramsete View.
Finally, also the Materials data base (RAMSETE.MAT) and each sound source
file (i.e. OMNI.SPK) can be easily edited with Write, or imported into a
Spreadsheet. You must anyway be careful with these files, as an improper
formatting of their fields can cause the Tracer to halt.
