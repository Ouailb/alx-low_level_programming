#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */


	void times_table(void)
	{

		int r, c, p;



		for (r = 0; r <= 9; r++)
		{

			for (c = 0; c <= 9; c++)
			{

				p = r * c;

				if (c != 0)
				{

					_putchar(',');
					_putchar(' ');

				}

				if (p < 10)
					_putchar(' ');
				else

					_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}

			_putchar('\n');

		}

	}
