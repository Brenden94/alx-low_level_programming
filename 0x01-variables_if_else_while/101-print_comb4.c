#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

void print_combinations()
{
    int i, j, k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                if (i != 7 || j != 8 || k != 9)
                {
                }
            }
        }
    }

    putchar('\n');
}

int main(void)
{
    print_combinations();
    return 0;
}
