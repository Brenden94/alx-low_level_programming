#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *num1, *num2;
    int result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++)
    {
        if (num1[i] < '0' || num1[i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    for (int i = 0; num2[i] != '\0'; i++)
    {
        if (num2[i] < '0' || num2[i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    result = atoi(num1) * atoi(num2);
    printf("%d\n", result);

    return (0);
}
