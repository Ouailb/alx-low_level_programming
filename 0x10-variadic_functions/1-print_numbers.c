
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list oy;

	unsigned int i = 0;

	va_start(oy, n);

	for (; i < n; i++)
	{
		int num = va_arg(oy, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(oy);
	printf("\n");
}
