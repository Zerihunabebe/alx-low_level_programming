#include "main.h"

/**
 * _memcpy - Copies content from source to destination
 * memory area
 *
 * @src: Source memory area
 *
 * @dest: Destination memory area
 *
 * @n: number of bytes
 *
 * Return: A pointer to @dest
 */

char *_memvpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i =0; i <n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
