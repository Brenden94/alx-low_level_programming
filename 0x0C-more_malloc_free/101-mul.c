#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    /* Check if num1 and num2 contain only digits */
    for (int i = 0; num1[i] != '\\0'; i++)
    {
        if (num1[i] < '0' || num1[i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    for (int i = 0; num2[i] != '\\0'; i++)
    {
        if (num2[i] < '0' || num2[i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    /* Implement your multiplication logic here. */
    /* Convert num1 and num2 to integers using atoi or strtol. */
    /* Perform the multiplication and store the result in an integer variable. */

    int result = atoi(num1) * atoi(num2);

    /* Print the result followed by a newline. */
    printf("%d\n", result);

    return (0);
}
