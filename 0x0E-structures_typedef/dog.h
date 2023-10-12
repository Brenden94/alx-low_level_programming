#ifndef DOG_H
#define DOG_H

struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif
