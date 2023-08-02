#include "main.h"
#include <string.h>

int check(char *s, int x, int len);
int length(char *s);

/**
 * check - check the string recusively
 * @s: input
 * @x: iterator
 * @len: length of string
 * Return: 1 or 0
 */

int check(char *s, int x, int len)
{
	if (s[x] != s[len - 1])
		return (0);
	if (x >= len)
		return (1);
	return (check(s, x + 1, len - 1));
}

/**
 * is_palindrome - check if a sting is palindrome
 * @s: string
 * Return: 1 or 0;
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, length(s)));
}

/**
 * length - returns the lent of a string
 * @s: input
 * Return: 1 or 0;
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}
