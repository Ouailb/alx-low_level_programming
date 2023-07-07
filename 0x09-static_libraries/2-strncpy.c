/**
 * _strncpy - copies a string
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: use at most n bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);

}
