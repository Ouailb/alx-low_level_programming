#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabe
 */



	void print_alphabet_x10(void)
	{
		char x;
		int i;


		for (i = 0; i <= 9; i++)
		{

			for (x = 'a'; x <= 'z'; x++)
			{
				_putchar(x);
			}

				_putchar('\n');

		}

	}


