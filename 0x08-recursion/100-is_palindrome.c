#include "main.h"

/**
 * str_len - returns length of a string
 * @s: string
 *
 * Return: length of string
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + str_len(s + 1));
}

/**
 * palindrome_helper - checks if string is palindrome
 * @s: string
 * @start: first index
 * @end: last index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = str_len(s);

	return (palindrome_helper(s, 0, len - 1));
}
