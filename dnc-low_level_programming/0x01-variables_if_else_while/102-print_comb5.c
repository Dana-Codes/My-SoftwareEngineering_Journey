#include <stdio.h>

int main(void)
{
	int tens1;
	int ones1;

	// Outer loop for the tens of the first number (0 to 9)
	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		// Inner loop fir the ones place of the first number (0 to 9)
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			// prints the first number with two digits using putchar
			putchar(tens1 + '0'); // prints tens place
			putchar(ones1 + '0'); // prints ones place

			// set a flag to check if its the last combination
			int last_combination = (tens1 == 9 && ones1 == 9);

			// If its's not the last combination, prints " , " to seperate combinations
			if (!last_combination)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}