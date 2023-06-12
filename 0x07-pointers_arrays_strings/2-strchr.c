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

	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);

}
