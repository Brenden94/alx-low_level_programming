#!/bin/bash

# Compile all .c files and create object files
gcc -c *.c

# Create a static library named liball.a from the object files
ar rc liball.a *.o

# Index the library for faster access
ranlib liball.a

# Clean up the temporary object files
rm *.o

