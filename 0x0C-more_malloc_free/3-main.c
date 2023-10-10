#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max);

int main(void)
{
    int *arr, *p;
    int min = 0, max = 10;

    arr = array_range(min, max);
    if (arr == NULL)
    {
        printf("Allocation failed\\n");
        return (1);
    }

    for (p = arr; p <= arr + (max - min); p++)
        printf("%d\\n", *p);

    free(arr);
    return (0);
}
