#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int L = 0;
	int i;

	char x;

	for (i = 0; s[L] != '\0'; i++)
	{
		L++;
	}

for (i = 0; i < L / 2; i++)
    {
        x = s[i];
        s[i] = s[L - i - 1];
        s[L - i - 1] = x;
    }
}
