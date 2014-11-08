Word Ladder Cracker version 1.0 - Written by J.A.SAXBY on Oct 12, 2012 - Contact <meep.online@gmail.com>

ABOUT

This is a free and open-source/shareware program that can crack four-letter/6-word word ladder puzzles.
The word ladder puzzle was first created by Lewis Caroll in 1877. This program will complete a word ladder where the first and last words are known.

USAGE

It's a command-line/terminal program. Yes, I know - SORRY... Usage is as follows:
On Windows and Linux, you should just have to double-click the executable. On Linux and other Unix systems you may have to set the file permission of the file to allow execution. When the program loads, just simply type in two four-letter words, press enter and if there are any ways to make a word-ladder out of those two words then the program should find them. On Mac OS X and other Unix systems, you may have to run the program directly from your terminal shell. Consult your system documentation if necessary.

BUILDING

Included in this package is the source code of the program. Play around with it if you want, It'd be nice for you to send me your edits especially if you do some interesting things with it. It should compile fine on any OS, as I believe the code is completely platform-independent. All that is required is a C++ compiler (I have only tested G++, which works fine but other compilers should have no problems with the code too). I'm sorry there's no OS X binary available, but if you're a Mac user who doesn't want to compile from source, consider installing 'Wine' (Windows compatibility layer thingy). That way you can run the Windows EXE (albeit slightly slower than usual).

MULTI-LANGUAGE SUPPORT

If you want to build a version of WLC for another language, all you need to do is create a wordlist file of same format of the file "tmp-WL" (in the src directory) and then in the program source code, change the first line of the source code from: 

#define LANG "en-GB"

Change to:

#define LANG "wordlist"

*change "wordlist" to whatever you called your alternative wordlist

NOTE

The Linux binary is 64-bit, the Windows one is 32-bit.