#include<stdio.h>
/**
 * main - I want to use putchar
 * description: writing alphabets but e and q
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 113 && n != 101)
		putchar(n);
	}
	putchar('\n');
	return (0);
}
