#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints "All possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x <= 99)
	{
		y = (x / 10 + '0');
		z = (x % 10 + '0');
		if (y < z)
		{
			putchar(y);
			putchar(z);
			if (x != 89)
			{
				putchar(',');
				putchar(' ');
		}
		}
		x++;
	}
		putchar('\n');
		return (0);
}

