#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
    long first = 1, second = 2, next;
    int count;

    printf("%ld, %ld", first, second);

    for (count = 3; count <= 50; count++)
    {
        next = first + second;
        printf(", %ld", next);
        first = second;
        second = next;
    }
    printf("\n");

    return (0);
}
