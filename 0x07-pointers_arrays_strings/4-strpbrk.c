
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x = 0, w;

	while (*(s + x) != '\0')
	{
		for (w = 0; *(accept + w) != '\0'; w++)
		{
			if (*(s + x) == *(accept + w))
				return (s + x);
		}

		x++;
	}
	return ('\0');
}
