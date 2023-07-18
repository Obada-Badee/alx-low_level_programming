#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
    int countto = 50;
    long fib[countto];
    int i;

    // Initialize first two Fibonacci numbers
    fib[0] = 1;
    fib[1] = 1;

    // Generate remaining Fibonacci numbers
    for (i = 2; i < countto; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print all Fibonacci numbers
    for (i = 0; i < countto; i++)
    {
        printf("%li ", fib[i]);
    }

    printf("\n");

    return (0);
}
