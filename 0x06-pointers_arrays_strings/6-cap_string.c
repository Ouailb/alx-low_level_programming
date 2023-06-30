/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to s.
 */

char *cap_string(char *s)
{

	int nb = 0;
	int i;



	int sp[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};


	if (*(s + nb) >= 'a' && *(s + nb) <= 'z')
		*(s + nb) = *(s + nb) - ' ';

	nb++;


	for (; *(s + nb) != '\0'; nb++)
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + nb) == sp[i])
			{
				if ((*(s + (nb + 1)) >= 'a') && (*(s + (nb + 1)) <= 'z'))
					*(s + (nb + 1)) = *(s + (nb + 1)) - 32;
				break;
			}
		}
	}
	return (s);

}
