#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    new_dog->name = strdup(name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->age = age;

    new_dog->owner = strdup(owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    return (new_dog);
}

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}

