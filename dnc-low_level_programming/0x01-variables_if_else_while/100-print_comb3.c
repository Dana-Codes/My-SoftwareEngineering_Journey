#include <stdio.h>

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens; ones <= 9; ones++)
		{
			putchar((tens % 10) + '0');
			putchar((ones % 10) + '0');
			if (tens != 8 || ones != 9)
				;

			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}