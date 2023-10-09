#include <stdio.h>
#include "holberton.h"

int main(void)
{
    int **grid;
    int height = 5;
    int width = 5;
    int row, col;

    grid = alloc_grid(width, height);
    if (grid == NULL)
    {
        printf("Failed to allocate memory for the grid.\\n");
        return (1);
    }

    for (row = 0; row < height; row++)
    {
        for (col = 0; col < width; col++)
        {
            grid[row][col] = row * width + col;
        }
    }

    printf("Grid Contents:\\n");
    for (row = 0; row < height; row++)
    {
        for (col = 0; col < width; col++)
        {
            printf("%d", grid[row][col]);
            if (col < width - 1)
                printf(" ");
        }
        printf("\\n");
    }

    free_grid(grid, height);

    return (0);
}
