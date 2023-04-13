#include "main.h"

/**
 * _calloc - allocate mem for array
 * @nmemb: number 
 * @size: size
 * Return: pointer or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *new;
        unsigned int i = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	};
	new = malloc(nmemb * size);
	if (new == NULL)
	{
		return (NULL);
	};
	while (i < (nmemb * size))
	{
		new[i] = 0;
		i++;
	};
	return (new);
}
