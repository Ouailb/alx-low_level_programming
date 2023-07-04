
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */



char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	for (; *s != '\0'; s++)
	{
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				return (s);
		}
	}

	return (NULL);
}
