/**
 * Author: Okonkwo Sylvester C.
 * Program: WinMingle Community C Training
 * Description: Prints all possible combinations of single-digit numbers.
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
	 putchar(i + '0');

	 if (i != 9)
         {
             putchar(',');
             putchar(' ');
	 }
     }

     putchar('\n');

     return (0);
}
