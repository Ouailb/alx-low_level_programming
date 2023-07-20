#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list oy;

	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(oy, n);

	for (; i < n; i++)
	{
		sum += va_arg(oy, int);
	}

	va_end(oy);

	return (sum);
}
