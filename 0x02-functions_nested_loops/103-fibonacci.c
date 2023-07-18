#include <stdio.h>

/**
 * main - compute sum of even-valued terms in Fibonacci sequence
 *
 * Return: 0 if successful
 */

int main(void)
{
    int prev = 1;
    int curr = 2;
    int next;
    int sum = 2;

    while (curr <= 4000000)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
        if (curr % 2 == 0)
        {
            sum += curr;
        }
    }

    printf("%d\n", sum);

    return 0;
}
