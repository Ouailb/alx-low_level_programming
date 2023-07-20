#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *separator = "";
	va_list oy;

	va_start(oy, format);

	while (format && format[x])
	{
		switch (format[x])
		{
			case 's':
				{
					char *str = va_arg(oy, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				}
			case 'f':
				printf("%s%f", separator, va_arg(oy, double));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(oy, int));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(oy, int));
				break;
			default:
				break;
		}

		separator = ", ";
		x++;
	}

	va_end(oy);
	printf("\n");
}

