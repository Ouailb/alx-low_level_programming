#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - Compares two strings and checks for identity using '*'.
 * @s1: The first string.
 * @s2: The second string with the special character '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	int L1 = strlen(s1);
	int L2 = strlen(s2);


	if (L1 > 0 && L2 > 0 && s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));

	else if (L1 == 0 && L2 == 0)
		return (1);



	else if (L2 > 0 && s2[0] == '*' && L1 == 0)
		return (wildcmp(s1, s2 + 1));



	else if (L2 > 0 && s2[0] == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	else
		return (0);
}
