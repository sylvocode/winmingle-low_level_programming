/**
 * Author: Okonkwo Sylvester C.
 * Program: WinMingle Community C Training
 * Description: Prints all the numbers of base 16 in lowercase.
 */

#include <stdio.h>

int main(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
	putchar(c);

    for (c = 'a'; c <= 'f'; c++)
	putchar(c);

    putchar('\n');

    return (0);
}
