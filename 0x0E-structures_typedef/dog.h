#ifndef DOG_H
#define DOG_H

/**
 * struct dog - class of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name,*owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;

void print_dog(struct dog *d);

void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
