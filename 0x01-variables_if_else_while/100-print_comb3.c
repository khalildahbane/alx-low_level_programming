#include<stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int i;

	for (n = '0'; n < '9'; n++)
	{
		for (i = n + '1'; i <= '9'; i++)
		{
			putchar(n = '0');
			putchar(',');
			putchar(' ');
			putchar(i + '0');
			putchar('\n');
		}
	}
	return (0);
}
