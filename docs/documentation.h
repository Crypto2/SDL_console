/*! \mainpage
 
\section intro Introduction
SDL_Console is a console that can be added to any SDL application. It is similar to Quake and other games consoles.
A console is meant to be a very simple way of interacting with a program and executing commands. You can also have 
more than one console at a time.
 
\section docs Documentation
For a detailed description of all functions see \ref SDL_console.h. Remark that functions that have the mark "Internal" 
are only used internally. There's not much use of calling these functions.

\section keys Keyboard Reference

 <table>
  <tr>
	<td>Up</td>
	<td>move command history up</td>
  </tr>
  <tr>
	<td>Down</td>
	<td>move command history down</td>
  </tr>
  <tr>
    <td>Left</td>
    <td>move cursor left</td>
  </tr>
  <tr>
    <td>Right</td>
    <td>move cursor right</td>
  </tr>
  <tr>
    <td>Ins</td>
    <td>toggle overwrite mode (you can set the two different cursor in SDL_console.h)</td>
  </tr>
  <tr>
    <td>Del</td>
    <td>delete character above cursor</td>
  </tr>
  <tr>
    <td>Backspace</td>
    <td>delete character left of cursor</td>
  </td>
  <tr>
    <td>Home</td>
    <td>move cursor to begin of command</td>
  </tr>
  <tr>
    <td>End</td>
    <td>move cursor to end of command</td>
  </tr>
  <tr>
    <td>Ctrl-A</td>
    <td>same as Home</td>
  </tr>
  <tr>
    <td>Ctrl-E</td>
    <td>same as End</td>
  </tr>
  <tr>
    <td>Ctrl-C</td>
    <td>clear commandline</td>
  </tr>
  <tr>
    <td>Page-Up</td>
    <td>move history up</td>
  </tr>
  <tr>
    <td>Page-Down</td>
    <td>move history down</td>
  </tr>
  <tr>
    <td>Shift-Home</td>
    <td>move to top of history</td>
  </tr>
  <tr>
    <td>Shift-End</td>
    <td>move to end of history</td>
  </tr>
  <tr>
    <td>Ctrl-L</td>
    <td>clear history</td>
  </tr>
</table>

Have Fun!
 
\author Garett Banuk <mongoose@mongeese.org> (Original Version)
\author Clemens Wacha <reflex-2000@gmx.net> (Version 2.x, Documentation)
\author Boris Lesner <talanthyr@tuxfamily.org> (Package Maintainer)
*/