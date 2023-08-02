#include "main.h"

int prime(int n, int x);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if the number is prime recursively
 * @n: input
 * @y: input
 * Return: 1 or 0
 */
int prime(int n, int y)
{
	if (y == 1)
		return (1);

	else if (n % y == 0 && y > 0)
		return (0);

	return (prime(n, y - 1));
}
