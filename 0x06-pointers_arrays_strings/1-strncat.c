/**
 * _strncat - concatenates two strings,
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: use at most n bytes from src.
 * Return: the pointer to dest.
 */


char *_strncat(char *dest, char *src, int n)
{
	char *P = dest;

	while (*P)
		P++;

	while (*src && n > 0)
	{
		*P = *src;
		P++;
		src++;
		n--;
	}

	*P = '\0';

	return (dest);
}
