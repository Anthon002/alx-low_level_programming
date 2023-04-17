#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age:dog's age
 * @owner: dog owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len = 0, owner_len = 0, i = 0;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
  {
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
  {
		return (NULL);
	}

	while (name[name_len] != '\0') 
  {
		name_len++;
	}
	name_len++;

	new_dog->name = malloc(name_len * sizeof(char));
	if (new_dog->name == NULL) 
  {
		free(new_dog);
		return (NULL);
	}

	while (i < name_len)
  {
		new_dog->name[i] = name[i];
		i++;
	}

	new_dog->age = age;

	while (owner[owner_len] != '\0')
  {
		owner_len++;
	}
	owner_len++;

	new_dog->owner = malloc(owner_len * sizeof(char));
	if (new_dog->owner == NULL) 
  {
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	i = 0;
	while (i < owner_len)
  {
		new_dog->owner[i] = owner[i];
		i++;
	}

	return (new_dog);
}
