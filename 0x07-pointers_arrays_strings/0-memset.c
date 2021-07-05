#include "Holberton.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the momery to print
 *
 * Return: Nothing.
 */
void char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
