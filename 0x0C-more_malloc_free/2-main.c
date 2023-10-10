#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);

int main(void)
{
    unsigned int i;
    int *arr;

    arr = _calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("Allocation failed\\n");
        return (1);
    }

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\\n");

    free(arr);
    return (0);
}
