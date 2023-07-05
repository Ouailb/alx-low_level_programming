#include "main.h"

int prime(int n, int divs);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 2));
}

/**
 * prime - Helper function to perform the recursive prime check.
 * @x: The number to check.
 * @divs: The current divs to check divisibility.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int prime(int x, int divs)
{
	if (divs >= x)
		return (1);

	if (x % divs == 0)
		return (0);

	return (prime(x, divs + 1));
}
