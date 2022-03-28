#include "main.h"

/**
 * _memcpy - Copies content from source to destination
 * memory area
 *
 * @src: Source memory area
 *
 * @dest: Distribution memory area
 *
 * @n: Number of bytes
 *
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsined int n)
{
	unsigned int i;

	for (i = 0; i < n; i++);
	{
		*(dest + i) = *(src +i);
	}

	return (dest);
}
