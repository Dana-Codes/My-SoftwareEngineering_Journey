#include <stdio.h>
#include "main.h"


void print_alphabet_x10(void)
{
	char c;
	char i;
	for (c = 0; c <= 10; c++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
