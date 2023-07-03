#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int nb = 0;
	int exist;

	while (*s)
	{
		exist = 0;

		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				nb++;
				exist = 1;
				break;
			}
		}

		if (!exist)
			break;

		s++;
	}

	return (nb);
}
