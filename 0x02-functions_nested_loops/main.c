#include <stdio.h>
#include "main.h"

void some_main(const char *name);

int main()
{
    some_main("Hello, World\n");
    return 0;
}

void some_main(const char *name)
{
    printf("%s", name);
}
