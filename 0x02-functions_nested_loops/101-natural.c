#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
    int sum = 0;

    // Sum multiples of 3
    int num_threes = (1023 / 3);
    sum += (3 * num_threes * (num_threes + 1)) / 2;

    // Sum multiples of 5
    int num_fives = (1023 / 5);
    sum += (5 * num_fives * (num_fives + 1)) / 2;

    // Subtract duplicates (multiples of 15)
    int num_fifteens = (1023 / 15);
    sum -= (15 * num_fifteens * (num_fifteens + 1)) / 2;

    printf("%d\n", sum);

    return 0;
}
