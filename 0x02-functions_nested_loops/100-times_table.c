#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int x, y, w;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				w = y * x;
				if (y == 0)
				{
					_putchar(w + '0');
				} else if (w < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(w + '0');
				} else if (w >= 10 && w < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((w / 10) + '0');
					_putchar((w % 10) + '0');
				} else if (w >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((w / 100) + '0');
					_putchar(((w / 10) % 10) + '0');
					_putchar((w % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
