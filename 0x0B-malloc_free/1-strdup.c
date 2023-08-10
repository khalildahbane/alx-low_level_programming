#include"main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * _strdup - duplicate to new memory space location :)
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = malloc(strlen(str) + 1);
	if (l != NULL)
	{
		strcpy(l, str);
	}
	return (l);
}
