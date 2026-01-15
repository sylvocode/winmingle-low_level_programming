/**
 * Author: Okonkwo Sylvester Chukwuwete-Awele
 * Program: WinMingle Community C Training
 * Description: Prints all possible different combinations of two digits.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');
            putchar(j + '0');

            if (i != 8 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return (0);
}

