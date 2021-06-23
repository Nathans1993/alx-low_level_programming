#include "holberton.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void time_table(void)
{
	int i, j, tbs;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tbs = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
			}
			else if (tbs >= 10)
			{
				_putchar((tbs / 10) + '0');
				_putchar((tbs % 10) + '0');
			}
			else if ((tbs < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((tbs % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
