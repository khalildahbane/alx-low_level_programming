#include "main.h"
/**
 * _islower - check if character is lowercase.
 * @c: character to check if it islowercase.
 * Return: 0 if lowercase, 1 if not.
 */ 
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
