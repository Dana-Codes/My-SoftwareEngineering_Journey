#include <stdio.h>

int main(void)
{
	int hunds;
	int tens;
	int ones;

	for (hunds = 0; hunds <= 9; hunds++)
	{

		for (tens = 0; tens <= 9; tens++)
		{

			for (ones = 0; ones <= 9; ones++)
			{
				if (hunds < tens && tens < ones)
				{
					putchar(hunds + '0'); // Print hundreds place
					putchar(tens + '0');  // Print tens place
					putchar(ones + '0');  // prints ones place

					if (hunds != 9 || tens != 8 || ones != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}