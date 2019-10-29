Using SDL_console under MS Windows
==================================

Since I mostly use free software I don't own VC++ 6. So I cannot 
give you any hints in compiling under VC++ 6. Have a look at the
makefile.VC6 for some hints.

Using Dev-C++ 5
===============

http://www.bloodshed.net/devcpp.html


I have supplied two projects for Devcpp:
- SDL_console.dev compiles the dll
- ConsoleExample.dev compiles the example

You can find them in the 'devcpp' folder

The exe and dll files are copied to the 'bin' folder.
To make the example work don't forget to copy the apropriate files to the
'bin' folder too:
- SDL.dll
- SDL_image.dll
- background.jpg, ConsoleFont.bmp, LargeFont.gif from the 'example' folder

That's it.

Making a DLL
============

Just doubleclick SDL_console.dev press the compile button.

Making a static library
=======================

Doubleclick SDL_console.dev and change the Type of the Project from 'Win32 DLL'
to 'WIN32 Static Lib' under Project->Project Options->Type.
Then compile as usual.


