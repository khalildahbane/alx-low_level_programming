#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i + 1] == '\0')
		{
			for (l = 0; src[l] != '\0'; l++)
			{
				dest[i + 1] = src[l];
				i++;
			}
		}
	}
	return (dest);
}
