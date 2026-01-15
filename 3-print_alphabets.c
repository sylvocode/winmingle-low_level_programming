/**
 * Author: Okonkwo Sylvester C.
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase, then uppercase.
 */

#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
         putchar(c);

    for (c = 'A'; c <= 'Z'; c++)
         putchar(c);

     putchar('\n');

     return (0);
}
