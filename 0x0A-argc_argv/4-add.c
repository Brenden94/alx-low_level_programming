#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef SUM_NUMBERS_H
#define SUM_NUMBERS_H

int check_num(char *str);

#endif /* SUM_NUMBERS_H */

/**
 * check_num - check if a string contains only digits
 * @str: array str
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(char *str)
{
    int count;
    for (count = 0; str[count] != '\0'; count++)
    {
        if (!isdigit(str[count]))
        {
            return 0;
        }
    }
    return 1;
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int str_to_int;
    int sum = 0;

    /* Declare count outside the for loop */
    int count;

    for (count = 1; count < argc; count++)
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]);
            sum += str_to_int;
        }
        else
        {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);

    return 0;
}

