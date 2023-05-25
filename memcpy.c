#include "shell.h"

/**
 * _memcpy - copies a block of memory from one place to another.
 * @destination: the place to be copied  to.
 * @source: the place to copy from.
 * @number_of_bytes: number of bytes.
 * Return: void.
 */

void _memcpy(void *destination, void *src, size_t number_of_bytes)
{
	size_t i;
	char *dest = (char *)destination;
	const char *source = (const char *)src;

	for (i = 0; i < number_of_bytes; ++i)
	{
		dest[i] = source[i];
	}
}
