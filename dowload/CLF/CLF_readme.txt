*** CLF  - Common Loudspeaker Format ***

CLF is the new standardized file format for describing the acoustical emission of loudspeakers.
Previously, most manufacturer did make these data available only in the proprietary format
for the EASE simulation software. Nowadays, we have this nice general-purpose format, which
allows for loudspeaker data files to be read from any simulation software, including Ramsete.

In this directory you find:
- the freeware CLF Viewer program for displaying graphically the directivity ballons,
  called CLF_Viewer_v1.0h.exe
- a huge collection of CLF loudspeaker files containing data for hundreths of different 
  loudspeakers: CLF.zip
- a small PDF document describing the activity of the CLF consortium (http://www.clfgroup.org/)
  and providing technical info on the data contained in a CLF file
  
  Albeit serious loudspeaker manufacturers, such as QSC or Tannoy, are now providing CLF data 
  for all of their loudspeakers, some other are still just providing EASE data files on their web 
  sites. If you need to employ these loudspeakers for your project, please ask to the manufacturer 
  to provide you with the required CLF files. Creating CLF files is easy and cheap, so any serious 
  manufacturer should acconplish easily to your request. If he doesn't, this means THAT HE IS NOT 
  A SERUOUS MANUFACTURER; and you better choose another maker....
  
Ramsete 2.5 is now capable of reading CLF loudspeaker data files inside the Source Manager module,
and then to export the data in the plain-text format (.SPK) employed by Ramsete. Please, do not
confuse the ASCII .SPK files employed by Ramsete (and easily importable in Excel, Notepad, Word, etc.)
with the proprietary, binary data files employed by EASE (some of them have been unluckily named with 
the .SPK extension, too).

The CLF file format comes in two different sub-formats, CF1 and CF2. The CF1 format contains octave-band
data with 10ø angular resolution, whilst CF2 contains 1/3 octave data with 5ø resolution.
In apparence, one could think that employing the more detailed data provided by CF2 results in more
accurate results of the simulation. Instead, as Ramsete works internally with octave-bands and 10ø
angular resolution, usually the accuracy is better employing CF1 data, which are already interpolated
with the proper resolution. So, if you can choose, always prefer a CF1 file over a CF2 file for the same
loudspeaker..

Final note: in demo mode, the angular resolution of Ramsete is reduced, by purpose, to 30ø. This causes
large errors when employing loudspeakers having very steep directivity curves. So be aware that
employing Ramsete in demo mode can skew significantly the comparison between different loudspeakers.
Of course, this problem does not affect Ramsete when employed in "registered" mode, by fitting its
"dongle" in the PC when performing pyramid tracing.

Angelo Farina, January 2008