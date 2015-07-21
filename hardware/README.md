Hardware files for the MultiRom Cartridge
=========================================

You need a recent build of the Kicad “product” branch on Launchpad to open the
project. The current “stable” version will not work. Instructions on how to
install the Kicad “product” branch without compiling it yourself can be found
[on the official Kicad website]
(http://www.kicad-pcb.org/display/KICAD/Installing+KiCad) for GNU/Linux, Mac
OSX and Windows.

The MultiRomCard-cache.lib is included here for convenience. If you have the
Kicad standard symbol libraries installed, you do not need this
file. Currently, the only items from the standard libraries are the schematic
symbols for the 74HC595 Shift Register and the 74HC245 Bus Transciever. All
other schematic symbols are custom made and included in MultiRomCard.lib.

![Schematic] (https://rawgithub.com/mkeller0815/flappy4000/master/MultiRom/hardware/MultiRomCard.svg)

The current PCB is a first attempt to test the circuit in a more controlled
environment than on a breadboard (where it did not work!). So be warned, it is
*not* finished, yet!

![PCB] (https://rawgithub.com/mkeller0815/flappy4000/master/MultiRom/hardware/MultiRomCard-brd.svg)
