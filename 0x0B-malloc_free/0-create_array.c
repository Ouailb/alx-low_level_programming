#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: stored char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *oy;

	unsigned int x;

	if (size == 0)
		return (NULL);

	oy = malloc(sizeof(c) * size);

	if (oy == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		oy[x] = c;

	return (oy);
}
