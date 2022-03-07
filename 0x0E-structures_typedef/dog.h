#ifndef DOG_H
#define DOG_H

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

#endif
