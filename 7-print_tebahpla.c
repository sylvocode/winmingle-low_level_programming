/**
 * Author: Okonkwo Sylvester C
 * Program: WinMIngle Community C Training
 * Description: Prints the lowercase alphabet in reverse order.
 */

#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'z'; c >= 'a'; c--)
	putchar(c);

    putchar('\n');

    return (0);
}
