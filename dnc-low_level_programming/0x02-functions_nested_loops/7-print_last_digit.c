#include "main.h"

/**
 * A function that prints the last digit of a number 
 * 
 * Return the value of the last digit 
*/

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}

