#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	for (x = 0; *s != '\0' ; s++)
	{
		x++;
	}

	return (x);
}

