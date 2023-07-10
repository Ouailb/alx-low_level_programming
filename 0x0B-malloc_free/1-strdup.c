#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *oy;

	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
	;

	oy = (char *)malloc(sizeof(char) * (x + 1));

	if (oy == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		oy[y] = str[y];

	return (oy);
}
