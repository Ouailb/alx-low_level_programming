/**
 * leet - encodes a string into 1337
 * @x: input string.
 * Return: the pointer to x.
 */


#include <stdlib.h>


char *leet(char *x)
{

	int letters[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int numbers[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	int i, j;

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (x[i] == letters[j])
			{
				x[i] = numbers[j];
				break;
			}
		}
	}

	return (x);
}
