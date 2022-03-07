#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - Define a new type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* initialize a varible of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print a struct dog */
void print_dog(struct dog *d);

/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/* a function that free dogs */
void free_dog(dog_t *d);

/* a function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

#endif
