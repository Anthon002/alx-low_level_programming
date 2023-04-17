#ifndef DOG_H
#define DOG_H

/**
 * struct dog - class of dog
 * @dog_name: dog's name
 * @dog_age: dog's age
 * @dog_owner: dog's owner
 */

struct dog
{
	char *dog_name,*dog_owner;
	float dog_age;
};

void init_dog(struct dog *d, char *dog_name, float dog_age, char *dog_owner);
void print_dog(struct dog *d);

typedef struct dog dog_type;

dog_type *new_dog(char *dog_name, float dog_age, char *dog_owner);

void dog_free(dog_type *d);

#endif
