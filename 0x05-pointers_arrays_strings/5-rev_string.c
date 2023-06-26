#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int nb = 0, i, j;
	char *pt, sv;

	while (nb >= 0)
	{
		if (s[nb] == '\0')
			break;
		nb++;
	}
	pt = s;

	for (i = 0; i < (nb - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			sv = *(pt + j);
			*(pt + j) = *(pt + (j - 1));
			*(pt + (j - 1)) = sv;
		}
	}
}
