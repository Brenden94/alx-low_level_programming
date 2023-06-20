#include <unistd.h>

int putchar_errcheck(char c)
{
    if (write(1, &c, 1) == -1)
        return -1;
    return 1;
}

void print_combinations(void)
{
    int i, j, k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar_errcheck((i % 10) + '0');
                putchar_errcheck((j % 10) + '0');
                putchar_errcheck((k % 10) + '0');

                if (!(i == 7 && j == 8 && k == 9))
                {
                    putchar_errcheck('.');
                }
            }
        }
    }

    putchar_errcheck('\n');
}

int main(void)
{
    print_combinations();
    return 0;
}
