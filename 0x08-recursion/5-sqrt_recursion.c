#include "main.h"

/**
 * power_squar - returns the natural square root of a number.
 * @x: input number.
 * @y: iterator.
 * Return: square root or -1.
 */

int power_squar(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) != x)
			return (-1);
		else
			return (y);
	}
	else
		return (0 + power_squar(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (power_squar(n, 2));
}

