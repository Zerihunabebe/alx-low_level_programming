#include "main.h"
#include <stdio.h>

void print_string(char *str);

/**
 * main - prints its name
 *
 * @argc: Length of argv
 *
 * @argv Arrays of the program arguments
 *
 * Return: 0, success
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}

/**
 * print_string - Prints all char of a string
 *
 * @str: Pointer to string
 *
 * Return: void
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
