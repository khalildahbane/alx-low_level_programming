#include<stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
