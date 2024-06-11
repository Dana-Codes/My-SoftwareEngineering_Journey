#include "main.h"
/**
 * function that computes the absolute value of an integer
 * @r: the integer to be computed.
 * 
 * Return: The absolute value of the integer
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
