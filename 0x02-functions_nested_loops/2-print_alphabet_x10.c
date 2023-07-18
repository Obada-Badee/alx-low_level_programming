#include "main.h"

/**
 *print_alphabet - prints the alphabet in liower cases
 *Return: 0
 */

void print_alphabet(void)
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
