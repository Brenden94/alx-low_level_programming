#!/bin/bash
echo 'gcc -E "$CFILE" -o c' >> 0-preprocessor
CFILE=main.c
echo 'chmod +x 0-preprocessor' >> 0-preprocessor
