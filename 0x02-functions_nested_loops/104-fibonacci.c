#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 *
 * Return: 0 if successful
 */

int main(void)
{
    int count = 0;
    unsigned long prev = 0;
    unsigned long curr = 1;
    unsigned long next;

    while (count < 98)
    {
        printf("%lu", curr);
        if (count < 97)
        {
            printf(", ");
        }

        next = prev + curr;
        prev = curr;
        curr = next;
        count++;
    }

    printf("\n");

    return 0;
}
