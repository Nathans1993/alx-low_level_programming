#include "holberton.h"

/**
 * _memcpy - copies a block of data from a source address to a destination address.
 * @dest: This is a pointer to destination.
 * @src: This is a pointer to source of data to be copied.
 * @n: This is the number of bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
}
