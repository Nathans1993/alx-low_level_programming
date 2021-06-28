#include "holberton.h"

/**
 * void swap_int - Swaps two integer using pointer
 * @a: input integers
 * @b: input integers
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = *a;
}
