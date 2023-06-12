#include "main.h"

/**
 * *_strchr -> Locate character in string
 *
 * @s: String
 * @c: Character
 *
 * Return: Depend Condition
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	return (NULL);
}
