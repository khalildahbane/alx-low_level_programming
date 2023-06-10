#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: the number of comaparaison
 */

int _strcmp(char *s1, char *s2)
{
	int l;

	for (l = 0; s1[l] != '\0' && s2[l] != '\0'; l++)
	{
		if (s1[l] != s2[l])
			return (s1[l] - s2[l]);
	}
	return (0);
}
