#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n%10 ;
	
	if (lastDigit > 5)
	  pritnf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
	  pritnf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else (lastDigit < 6)
	  pritnf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
