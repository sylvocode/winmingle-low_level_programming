/**
 * Author: Okonkwo Sylvester Chukwuwete-Awele
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers of base 10 using putchar.
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
	 putchar(i + '0');

    putchar('\n');

    return (0);
}
