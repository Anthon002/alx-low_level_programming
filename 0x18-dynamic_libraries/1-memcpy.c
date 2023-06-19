#include "main.h"

/**
 *_memcpy - copy memory area
 *@dest: destination
 *@src: source
 *@n: size of memory
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
