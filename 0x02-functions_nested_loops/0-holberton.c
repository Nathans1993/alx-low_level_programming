#include<stdio.h>
/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int str[] = {73, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');
	return (0);
}
