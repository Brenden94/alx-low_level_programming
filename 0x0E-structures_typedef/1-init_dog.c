#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != 0)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
