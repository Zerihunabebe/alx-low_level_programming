#include "main.h"

/**
 * _memset - fills the first at n bytes of the memory area pointed
 * to by @s with the cnstant byte of at b
 *
 * @s: pointer to a memory area
 *
 * @b: value that is to fill up memory area at s
 *
 * @n: number of bytes of memory area at s to be filled with at b
 *
 * return:pointer to the memory area at s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + I) = b;
	}

	return (s);
}
