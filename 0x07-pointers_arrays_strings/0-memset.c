#include "holberton.h"


/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */


char *_memset(char *s, char b, unsigned int n)
{
	while(n>0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
