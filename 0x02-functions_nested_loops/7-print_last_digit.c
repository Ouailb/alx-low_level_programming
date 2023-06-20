#include "main.h"

/**
 * print_last_digit - Check Main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */

	int print_last_digit(int r)
	{

	int lst_digt = r % 10;

	if (lst_digt < 0)
		lst_digt = -lst_digt;

	_putchar(lst_digt + '0');

	return (lst_digt);


	}
