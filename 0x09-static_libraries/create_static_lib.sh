#!/bin/bash

# Compile all .c files into .o object files
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the library for faster access
ranlib liball.a

# Clean up by removing the object files
rm *.o
