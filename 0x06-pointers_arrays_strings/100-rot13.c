/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to s.
 */



char *rot13(char *s)
{

	char A[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i , nb = 0 ;

	for (; *(s + nb) != '\0'; nb++)
	{
		for (i = 0; A[i] != '\0'; i++)
		{
			if (*(s + nb) == A[i])
			{
				*(s + nb) = rot13[i];
				break;
			}
		}
	}

	return (s);
}s
