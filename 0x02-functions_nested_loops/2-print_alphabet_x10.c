#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int n, x;

	for (x = 0; x <= 10; x++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
