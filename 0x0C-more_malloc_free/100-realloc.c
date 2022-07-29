#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: memory previously allocated
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: ptr
 * if new_size > old_size added memory should not be initialized
 * if new_size == old_size return ptr
 * if ptr is NULL then it is equivalent to malloc(new_size)
 * if new_size = 0 and ptr is not NULL then it is equivalent to free(ptr)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
