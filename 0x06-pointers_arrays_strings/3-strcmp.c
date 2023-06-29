/**
 * *_strcmp - compare two words
 * @s1: pointer to a char
 * @s2: pointer to a char
 * Return: 0 if s1 and s2 are equals, another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	return (s1[i] - s2[i]);
}
