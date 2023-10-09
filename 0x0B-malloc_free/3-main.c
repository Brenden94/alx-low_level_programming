#include <stdio.h>
#include "alloc_grid.h"

int main(void)
{
    int **grid;
    int width = 5;
    int height = 4;
    int i, j;

    grid = alloc_grid(width, height);

    if (grid == NULL)
    {
        printf("Failed to allocate grid\n");
        return (1);
    }

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\\n");
    }

    return (0);
}
