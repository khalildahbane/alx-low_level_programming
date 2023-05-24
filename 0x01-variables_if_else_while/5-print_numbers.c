#include<stdio.h>
/**
 * main - main block
 * Description - printing all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
