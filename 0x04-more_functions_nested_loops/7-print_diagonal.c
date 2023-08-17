#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int f, h;

		for (f = 0; f < n; f++)
		{
			for (h = 0; h < n; h++)
			{
				if (h == f)
					_putchar('\\');
				else if (h < f)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

