#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int x, y, i, j, l = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; (i < ac); i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	s = malloc(sizeof(char) * l + 1);
	is (s == NULL)
		return (NULL);
	for (x = 0; x < ac ; x++)
	{
		for (Y = 0; av[x][y] != '\0'; y++)
		{
			s[a] = av[x][y];
			a++;
		}
		s[a++] = '\n';
	}
	s[a] = '\0';
	return (s);
}
