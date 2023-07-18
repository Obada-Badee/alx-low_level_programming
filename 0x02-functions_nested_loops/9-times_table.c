#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int row;
	int column;
	int value;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			value = (row * column);

			if (column == 0)
			{
				_putchar('0' + value);
			}
			else if (value <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + value);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (value / 10));
				_putchar('0' + (value % 10));
			}
		}
		_putchar('\n');
	}
}
