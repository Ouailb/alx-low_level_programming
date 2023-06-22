#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */


void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (j = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

