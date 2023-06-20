#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* Prints _putchar followed by a new line */
int main(void);

/* Prints the alphabet in lowercase followed by a new line */
void print_alphabet(void);

/* Prints 10 times the alphabet in lowercase followed by a new line */
void print_alphabet_x10(void);

/* Checks if a character is lowercase */
int _islower(int c);

/* Checks if a character is alphabetic */
int _isalpha(int c);

/* Prints the sign of a number */
int print_sign(int n);

/* Computes the absolute value of an integer */
int _abs(int n);

/* Prints the last digit of a number */
int print_last_digit(int n);

/* Prints every minute of the day of Jack Bauer */
void jack_bauer(void);

/* Prints the 9 times table */
void times_table(void);

/* Adds two integers and returns the result */
int add(int a, int b);

/* Prints all natural numbers from n to 98 */
void print_to_98(int n);

#endif /* MAIN_H */
void init(void);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int n);

int print_last_digit(int n);

void jack_bauer(void);

void times_table(void);

int add(int a, int b);

void print_to_98(int n);

void init(void)
{
    /* Initialization code goes here */
}
