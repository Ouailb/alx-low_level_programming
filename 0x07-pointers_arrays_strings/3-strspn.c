#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int exist = 1;

	while (*s && exist)
	{
		exist = 0;

		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				exist = 1;
				break;
			}
		}

		s++;
	}

	return (count);
}
