#!/bin/bash
gcc -c *.c #compile all .c files to .o
ar rcs liball.a *.o #create a static library
rm *.o #clean up the .o files
