#include "main.h"

/**
 *_isdigit - check input between 0 to 9
 *
 *@c: checked character
 *
 *Return: 1 if true
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);


}
