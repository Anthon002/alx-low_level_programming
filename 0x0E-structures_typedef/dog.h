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
void print_dog(struct dog *d);

typedef struct dog dog_type;

dog_type *new_dog(char *name, float age, char *owner);

void dogFree(dog_type *d);

#endif
