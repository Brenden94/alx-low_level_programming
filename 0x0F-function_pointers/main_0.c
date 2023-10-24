#include <stdio.h>
#include "function_pointers.h"

void print_name_uppercase(char *name);

int main(void)
{
	print_name("Hodor", &print_name_uppercase);
	return (0);
}
