#include "main.h"
/**
 * puts2 - func that prints 1 char/2 of a string, followed by a new line.
 * @str: declaration of str and paramters for the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	char x;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			x = str[i];
			_putchar(x);
		}
	}
	_putchar('\n');
}
