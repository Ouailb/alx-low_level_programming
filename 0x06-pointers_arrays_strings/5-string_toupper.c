/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: input string.
 * Return: the pointer to x.
 */


char *string_toupper(char *x)
{


	int count = 0;

	for (; *(x + count) != '\0';)
	{
		if ((*(x + count) >= 97) && (*(x + count) <= 122))
			*(x + count) = *(x + count) - 32;
		count++;
	}

	return (x);
}
