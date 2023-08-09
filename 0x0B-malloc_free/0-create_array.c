#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c :)
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c :)
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;

	char *arry;

	if (size == 0)
	{
		return (NULL);
	}

	arry = malloc(size * sizeof(char));

	if (arry == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		arry[n] = c;
	}
	return (arry);


}
