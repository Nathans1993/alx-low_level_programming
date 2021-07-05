#include "Holberton.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant bytes
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
void char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i=0; i<n; i++)
		*(s + i) = b;


	return (s);
}
