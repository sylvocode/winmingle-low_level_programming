#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: accepted bytes
 *
 * Return: number of matching bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;
	int found;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept [j])
			{
				found = 1;
				break;
			}
		}
		
		if (found == 0)
		{
			break;
		}
		
		count++;
	}

	return (count);
}
