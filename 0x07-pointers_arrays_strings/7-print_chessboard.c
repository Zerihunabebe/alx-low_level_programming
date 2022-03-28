#include "main.h"

/**
 * print_chessbord - prints the chessboard
 * @a: two dimension array to print
 * Return: 2d array of chars
 */
void print_chesspoard(char (*a)[8])
{
	/*Declaring variables*/
	int i, j;

	i = 0;
	while (i < 8) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n'); /*print new line*/
		i++; /*add +1*/
	}

}
