i#include "main.h"


/**
 * more_numbers - prints 0 to 14 , 10 times
 *
 * Return: no return
 */




void more_numbers(void)
{

	int x, y;

	for (y = 0; y < 10; y++)
	{

		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');

		}
		_putchar('\n');

	}

}

