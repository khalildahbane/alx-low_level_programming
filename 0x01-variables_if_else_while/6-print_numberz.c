#include<stdio.h>
/**
 * main - this program prints all digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
