#include <stdio.h>
#include <stdlib.h>

/**
 * checker_numero - check - string there are digit :)
 * @str: array str
 *
 * Return: the int converted from the string
 */

int checker_numero(char *str)
{
	int l;
	int num = 0;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (str[l] < '0' || str[l] > '9')
		{
			return (-1);
		}
		num = num * 10 + (str[l] - '0');
	}
	return (num);
}

/**
 * main - Print the name of the program :)
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int sm = 0;
	int i, nm;

	for (i = 1; i < argc; i++)
	{
		nm = checker_numero(argv[i]);
		if (nm == -1)
		{
			printf("Error\n");
			return (1);
		}
		sm += nm;
	}
	printf("%d\n", sm);
	return (0);
}
