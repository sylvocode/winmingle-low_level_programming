#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it'
 * @size: size of the array
 * @c: character to initialize array with
 *
 * Return: pointer to array, or NULL if size = 0
 * or allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	  return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	  return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
