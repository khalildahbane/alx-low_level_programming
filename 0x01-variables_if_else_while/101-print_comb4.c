#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, x;

	for (n = 0; n <= 7; n++)
	{
		for (i = n + 1; i <= 8; i++)
		{
			for (x = n + 1; x <= 9; x++)
			{
				putchar(n + '0');
				putchar(i + '0');
				putchar(x + '0');
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

