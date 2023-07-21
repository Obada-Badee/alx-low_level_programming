#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int drawBack;
	int space;

	if (n > 0)
	{
		for (drawBack = 1; drawBack <= n; drawBack++)
		{
			for (space = 1; space < drawBack; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
