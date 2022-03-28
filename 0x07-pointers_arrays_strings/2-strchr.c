#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates character in string
 * @s: string be searched
 * @c: character to be foound
 *
 * Return: a pointer to the first occurance of char
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
