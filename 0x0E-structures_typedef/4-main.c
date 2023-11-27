#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Ghost", 4.75, "Jon Snow");
	if (my_dog == NULL)
		return (1);

	printf("My name is %s, and I am %.2f years old :) - Woof!\n",
	       my_dog->name, my_dog->age);
	free_dog(my_dog);

	return (0);
}

