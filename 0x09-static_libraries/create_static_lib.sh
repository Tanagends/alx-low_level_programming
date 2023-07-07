#!/bin/bash

# Compile all the .c files in the current directory into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from the .o files
ar -rc liball.a *.o

# Index the symbols in the library for faster linking
ranlib liball.a

# Remove the .o files
rm *.o
