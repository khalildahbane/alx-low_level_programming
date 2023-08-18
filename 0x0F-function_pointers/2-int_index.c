#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -> Searches for an integer
 *
 * @array: Input Array
 * @size: Array Size
 * @cmp: Pointer To Function
 *
 * Return: Index Of The First Element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
