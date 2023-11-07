#include "main.h"

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text
", av[0]);
        return (1);
    }

    res = create_file(av[1], av[2]);

    if (res == -1)
    {
        dprintf(2, "Error: Can't write to %s
", av[1]);
        return (1);
    }

    return (0);
}

