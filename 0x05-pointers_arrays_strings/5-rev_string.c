#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char sv;

	while (s[x] != '\0')
	{
		x++;
	}

	y--;

	while (x < y)
	{
		sv = s[x];
		s[x] = s[y];
		s[y] = sv;
		x++;
		y--;
	}
}
