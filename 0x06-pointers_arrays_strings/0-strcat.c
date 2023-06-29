
/**
 * *_strcat - concat two words
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{

	int i;

	char *P = dest;

	while (*P)
		P++;


	for (i = 0; src[i] != '\0'; i++)
	{
		*P = src[i];
		P++;
	}

	*P = '\0';

	return (dest);

}
