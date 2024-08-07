#include "main.h"

/**
 * function that prints the sign of a number
 * returns 1 and prints + if n is greater than zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
