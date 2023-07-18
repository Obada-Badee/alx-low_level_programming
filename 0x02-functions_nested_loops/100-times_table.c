#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: the number to print to
 */

void print_times_table(int n)
{
	int row;
	int column;
	int value;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);
				if (column == 0)
					_putchar('0' + value);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (value <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + value);
					}
					else if (value > 9 && value < 100)
					{
						_putchar(' ');
						_putchar('0' + (value / 10));
						_putchar('0' + (value % 10));
					}
					else if (value >= 100)
					{
						_putchar('0' + (value / 100));
						_putchar('0' + ((value / 10) % 10));
						_putchar('0' + (value % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
