#include "main.h"

/**
 * _memset - filles the first @n bytes of the memory area pointed
 * to by @s with constant byte of @b
 *
 * @s: Pointer to a memory area
 *
 * @b: Value that is to fill up memory area @s
 *
 * @n: number of bytes of meomry area @s to be filled with @b
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		*(s +i) = b;
	}

	return (s);
}
