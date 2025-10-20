**************************************************************** 
***   Ramsete Beta 3.14 - Enhanced WAV file export           ***
**************************************************************** 

This release of Ramsete View v. 3.14 brings new features in the "Export IR to WAV" capability.
Three new option buttons have been added.
Two of them allow to enable/disable the export of the Directional Fied and Diffuse Field.
When both are disabled, of course no IR is exported!
The third option is for enabling/disabling the Near Field effect when exporting Ambisonics IRs.
The Near Field effect causes a low frequency boost in higher orders (there is no boost at order 0).
This makes the auralization performed in a 6DOF environment much more realistic: when the listner 
comes close to a soound spurce,the low frequency boost mimics what happens in reality.
Furthermore, this release is also accompanied with a Matlab script which packs automatically the
exported WAV files into a single SOFA file, to be used with a modified version of the SPARTA_6DOF
convolver plugin. The included SOFA.zip file contains everything needed for running a realistic
6DOF auralization, getting attitude and position from an HMD or from a webcam visual tracker.
Here the relevant references:

SPARTA_6DOF Convolver: https://leomccormack.github.io/sparta-site/docs/plugins/sparta-suite/#6dofconv
Please, first install the official SPARTA suite, then overwrite the plugin with the new version provided
inside the SOFA.ZIP file.

6DOF visual headtracker in Javascript by Adriano Farina: https://github.com/xorgol/headTracking
Please follow the instructions for running this software in your browser, enabling to use you webcam
for tracking position and orientation of you head, and trasmitting it to the SPARTA_6DOF VST plugin
through the OSC protocol, thanks to the oscBRIDGE.js additional program. Just specify the IP port
to be used by Sparta_6DOF on the comamnd line (node .\oscBrdge.js 9000).
You need first to install Node and Visual Studio Core, with its local web server extension, for running 
this package.

**************************************************************** 
*** Ramsete Beta 3.13 with STI support for IEC-60268-16:2020 ***
**************************************************************** 

This folder contains a number of files related to the recent upgrade of Ramsete View v. 3.13, 
with full support for the latest IEC-60268-16:2020 standard for the evaluation of STI
(Speech Transmission Index).
A new Ramsete Source file has been created, named Human-CHU.spk, based on directivity of
real human talkers measured by Chu in 2001 and on my own measurements made in 2003 and described
in my AES 118 paper.
Both documents are provided in PDF format, alongside with the new IEC standard.
A secon Ramsete Source file has been included containing the directivity and power level of the Bedrock
BTB-65 TalkBox. This has been obtained by importing the CLF file made available on the Bedrock web site.
For both sources, the power levels Lw in octave bands have been adjusted so that the spectrum at 1m 
on axis of the mouth has the correct spectrum and overal A-weighted SPL value of 60.0 dB(A), as required
by the new IEC standard (v. 2020, a.k.a. v.5).
An Excel file (with macros - not a virus!) contains all the measured directivity data from the CHU article.
The interpolation of the directivity balloons has been done using Excel's Solver module, 
obtaining the Ambisonics coefficients at 1st and 2nd order which approximate the measured data.
An Ambix encoder filter matrix is also provided in WAV format, to be used with X-volver, X-MCFX, 
MCFX-convolver or Sparta Matrix Convolver. 
It is an 1x9 FIR filter matrix, creating a 9-channels output (Ambix 2nd order) from a  single mono 
input (recorded on axis of the mouth).
A Plogue Bidule example is provided, allowing to render a directional voice with 6DOF
(positioning inside the virtual room and rotation) and using IEM RoomEncoder for rendering.
Finally, 2 test examples are provided in Ramsete RAY format, for checking that the
new SPK file works as expected in free field conditions.
Please contact me if you find any bug.

Angelo Farina, 12 March 2023

PS: for installing, as usual for all Beta versions, just copy all the content of the ZIP file in 
C:\Ramsete, ovewriting any existing files or folders with the same names.
This is a full incremental update, you should first install Ramsete 3.02, and then the 3.13 update
(which also includes all the previous updates 3.07 up to 3.12).

*********************************************************** 
*** Readme file for Ramsete Beta v. 3.12 ***
The big innovation of Ramsete 3.12 is in Ramsete View. This module can now import and export geometry files
in the PLY format used by I-Simpa.
Also the extension for defining materials is supported: in export an additional TXT file is generated.
In import, the additional TXT file is currently ignored, but "empty" materials are added to Ramsete.MAT
when some material used by I-Simpa is not already defined in Ramsete.MAT. When this happens, the user
has to manually add the material properties to Ramsete.MAT, either editing it with the Notepad, or
using the Ramsete Material Manager module.

*********************************************************** 
Readme file for Ramsete Beta v. 3.11 ***
This folder contains the "Beta" version of Source Manager 3.11, Ramsete View 3.11 and Material Manager 3.11.
All three programs now support correctly up to 2000 materials, instead of 1000.
The other programs have been modified for dealing with this new feature.
Please note that previous version 3.10 was bugged when dealing with material numbers greater than 1000.

************************************************************ 
Readme file for Ramsete Beta v. 3.10 ***
This folder contains the "Beta" version of Source Manager 3.10, Ramsete View 3.10 and Material Manager 3.10.
The main modification os in Material amnager, which now has up to 2000 materials, instead of 1000.
The other programs have been modified for dealing with this new feature.

*********************************************************
Readme file for Ramsete Beta v. 3.09
The big novelty is the import and export filters for the Catt Acoustics .GEO format.
Please note that this deals properly with the geometry (room, source and receiver positions) and material properties.
Catt Acoustics uses proprietary data files for defining the source directivity (.SD0, .SD1 or .SD2 formats).
Whilst Ramsete recognizes the filename defining the sound sources, in the geometry file (.RAY in Ramsete)
you find the reference to source files automatically converted with the same name but with the .SPK suffix.
But no conversion is actually done automatically, so the new .SPK file must be created from scratch, or from
existing CLF files.
Similarly, if you convert a .RAY file to .GEO, the referred .SPK source files are renamed to .SD0, but these source 
directivity files are not automatically created.
The Examples folder contains a number of .GEO and .RAY files, which were used during the development of this new feature.
If you have your own .GEO or .RAY files and the Catt Acoustics import/export filters are not working properly, please submit
samples of these files to the author (farina@unipr.it) for debugging. This is the main goal of releasing this Beta version.


*********************************************************
Readme file for RamseteBeta v. 3.08
This folder contains the "Beta" version of Ramsete View 3.08.
This new version supports MIMO impulse response creation in matrix multichannel WAV format, compatible with all
existing matrix convolution plugins: X-MCFX, MCFX, X-volver, Sparta Matrix Convolver, Aurora for Audacity, etc.
Ramsete is the forst room acoustics simulator capable of creating MIMO impulse response, which create a 6DOF link
between a source position and a receiver position. The directive emisison from the source and the directive listening 
from the receiver can be decomposed both in spherical hamronics (High Order Ambsionics) or with the SPS approach.
More info in these papers:

Angelo Farina, Alberto Amendola, Lorenzo Chiesi, Andrea Capra, Simone Campanini "Spatial PCM Sampling: A New Method For Sound Recording And Playback" - AES 52nd International Conference, Guildford, UK, 2013 September 2Ã¢â‚¬â€œ4 Permalink: http://www.angelofarina.it/Public/Papers/273-AES52-2013.pdf

Angelo Farina, Lorenzo Chiesi	Measuring Spatial MIMO Impulse Responses in Rooms Employing Spherical Transducer Arrays	
AES Conference on Sound Field Control, Guildford (UK), 18-20 July 2016 Permalink: http://www.angelofarina.it/Public/Papers/280-AES-2016.pdf


*********************************************************
README.TXT for Ramsete Beta 3.07
3.07 is a comprehensive update regarding 3 Ramsete modules:
- Material Manager
- Source Manager
- Ramsete View

In Material Manager the main modification is that now the default list of material is in English. 
This is contained in the ramsete.mat file.
If the user wants to switch back and forth between the English and Italian lists of materials,
the corresponding .mat files are provided. For changing the one which is being used, a copy
of it must be renamed as ramsete.mat
Remember that if you edited your materials, or added new ones, replacing the ramsete.mat
file with a new version will overwrite such modifications. So please backup your
modified ramsete.mat file before overwriting, and thereafter restore your modifications
by editing the new ramsete.mat file. It is a plain text file, so you can use notepad.exe,
if you do not like editing it using the Material Manager program

In Source Manager, the main modification regards the module employed for creating a new sound
source by interpolating polar patterns (File - Interpolate Polar). The modification allows
to import a .PRN file containing measured polar patterns (horizontal, followed by vertical)
in absolute SPL values. Thanks to this modification, the resulting SPK file will also be properly
calibrated in terms of sound power levels and efficiency (assuming that the measured values were
obtained @ 1W, 1 meter).

In Ramsete View four main modifications were done:
1) All the data and tables are now following the standard order of frequency bands (1 to 10) 
followed by band A, and LIN as the last one (previously A and LIN were swapped).
2) The option of exporting the impulse responses as WAV files now defaults to receiver 1
(instead of All), and to single-channel mono-omni (instead of Ambix 3rd order). 
It is now possible to specify the temporal density of impulses (in impulses/ms), with a
defaulty value of 1 impulse/ms. Increasing this number creates a smoother impulse response,
at the price of a slower calculation.
Finally, the list of virtual microphone configurations now includes Ambix up to order 5 - 36 ch.
(previously the maximum was order 3 - 16 ch.)
3) The colour mapping options now default for NOT using Surfer (by Golden Software): this
must be selected manually by users who have already installed this external program
4) In the visualization of ray paths (View - Ray Paths) the single paths are now correctly ordered
at increasing arrival times, making it possible to navigate them easily using the mouse or the
arrow keys. This was working properly in Ramsete 2.xx, but was broken in Ramsete 3.00 and following.

*********************************************************

If You find bugs with these new features, please contact the author (farina@unipr.it)
