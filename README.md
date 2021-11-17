#Z80-MBC2
Z80-MBC2 is a main board on which the CP / M-80 can also work. 
With this I woke up the old dinosaur that is in me and rediscovered old things I knew how to do. 
#ESP32-VGA
ESP32-VGA is a video terminal as well as emulating ANSI terminale. It is also graph with standard 640x480 16 colors.
It connects to the main card via TTL serial port to 115200 b / s and I can guarantee you that it works very well. 

# Hi-tech-C-3.09
My opinion is that it is the best C compiler for CP / M-80,
an exact balance between efficiency and usability.

In the IEEE754 folder there is the description of how Hi-tech technicians
have implemented IEEE754 representation (single precision) and examples.

In the LIBC and LIBF folders you will find the sources of the modules in C and
in assembler to compile (the sources are in sources.zip).

The LIBV folder contains my implementations of modules that aren't in LIBC and LIBF.

LIBG contains routine instead to manage the graphics of the ESP32-VGA video terminal by Fabrizio di Vittorio. 

In Parameters passing you will find the description and an example of how the compiler 
receives and returns the parameters through the index register IX. 

#BBCBasic
It is probably the most popular BASIC version for the 8 bits you can find, there are also versions for Mac and Windows.
Here you can found the adaptation of it for ESP32-VGA and some demonstrative graphic programs.

For more explanations follow me on https://automatico.freevar.com 
