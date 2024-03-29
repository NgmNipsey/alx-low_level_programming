#include "main.h"

/**
 * _realloc - re-allocates memeory blocks.
 * @ptr: pointer variable.
 * @old_size: store old size.
 * @new_size: store new size.
 * Return: new pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
