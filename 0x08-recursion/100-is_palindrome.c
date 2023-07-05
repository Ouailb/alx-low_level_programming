#include "main.h"
#include <string.h>
#include <stdio.h>

int palindrome_(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1) /* Base case: empty string or single character is a palindrome */
		return 1;

	return palindrome_(s, 0, len - 1);
}

/**
 * palindrome_ - Helper function to perform the recursive palindrome check.
 * @s: The string to check.
 * @start: The starting index of the substring to compare.
 * @end: The ending index of the substring to compare.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */


int palindrome_(char *s, int start, int end)
{
	if (start >= end) /* Base case: compared all characters in the string */
		return 1;

	if (s[start] != s[end]) /* Characters don't match, not a palindrome */
		return 0;

	return palindrome_(s, start + 1, end - 1);
}
