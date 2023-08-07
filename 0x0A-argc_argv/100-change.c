#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to :)
 * make change for an amount of money :)
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int amnt;
	int coin[] = {25, 10, 5, 2, 1};
	int numero_coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amnt = atoi(argv[1]);

	if (amnt < 0)
	{
		printf("0\n");
		return (0);
	}
	numero_coin = 0;

	for (i = 0; i < 5; i++)
	{
		numero_coin += amnt / coin[i];
		amnt %= coin[i];
	}
	printf("%d\n", numero_coin);

	return (0);
}
