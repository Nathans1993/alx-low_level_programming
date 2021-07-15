#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory.
 * @b: amount to bytes
 *
 * Return: pointers to the alocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
