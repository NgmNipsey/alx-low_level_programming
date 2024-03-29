#include "function_pointers.h"

/**
 * int_index - searches an integer.
 * @array: array.
 * @size: array size.
 * @cmp: function pointer.
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
