#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string
 */

void print_rev(char *s)
{
	int L = 0;
	int i;



	for (i = 0; s[L] != '\0'; i++)
	{
		L++;
	}

	for (i = L - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
