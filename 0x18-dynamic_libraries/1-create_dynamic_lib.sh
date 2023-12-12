#!/bin/bash

# Compile all .c files to object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up: remove the object files
rm *.o
