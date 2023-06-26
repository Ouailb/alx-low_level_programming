#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int L = 0;
	int i;
	int pt;

	for (i = 0; str[L] != '\0'; i++)
	{
		L++;
	}


	if (L % 2 == 0)
		pt = L / 2;
	else
		pt = (L - 1) / 2 + 1;

	for (i = pt; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
