#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Error\n");
        exit(98);
    }
    int num1, num2, result;
    char *operator = argv[2];
    int (*op_func)(int, int);
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3);

    if ((*operator == / || *operator == %) && num2 == 0) {
        printf("Error\n");
        exit(100);
    }

    op_func = get_op_func(operator);
    if (!op_func) {
        printf("Error\n");
        exit(99);
    }

    result = op_func(num1, num2);
    printf("%d\n", result);

    return (0);
}
