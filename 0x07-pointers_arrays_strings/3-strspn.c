#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, exist;

	while (*(s + i) != '\0')
	{
		exist = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				exist = 1;
				break;
			}
		}
		if (exist == 0)
			break;
		i++;
	}
	return (i);
}
