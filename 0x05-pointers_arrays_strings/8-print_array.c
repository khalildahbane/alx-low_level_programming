#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%i", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
