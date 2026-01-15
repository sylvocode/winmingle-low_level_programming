/**
 * Author: Okonkwo Sylvester C.
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase except q and e.
 */

#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        if (c != 'q' && c != 'e')
	{
	    putchar(c);
	}
    }
    putchar('\n');

    return (0);
}

