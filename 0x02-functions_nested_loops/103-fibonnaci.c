#include <stdio.h>

/**
 * main - prints the sum of the even-valued Fibonacci numbers ≤ 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long first = 1, second = 2, next;
    unsigned long sum_even = 2; /* start with 2 since second term is even */

    next = first + second;

    while (next <= 4000000)
    {
        if (next % 2 == 0)
            sum_even += next;

        first = second;
        second = next;
        next = first + second;
    }

    printf("%lu\n", sum_even);

    return (0);
}
