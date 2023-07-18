#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98 (n: n is real number)
 * @n: the number to start print from 
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
