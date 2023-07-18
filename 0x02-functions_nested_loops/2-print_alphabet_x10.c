#include "main.h"

/**
 *print_alphabet - prints the alphabet in liower cases
 *Return: 0
 */

void void print_alphabet_x10(void)
{
	char start;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (start = 'a'; start <= 'z'; start++)
		{
			_putchar(start);
		}

		start = 'a';
	}

	_putchar('\n');
}
