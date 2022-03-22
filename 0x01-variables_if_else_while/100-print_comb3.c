#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int number_left;
	int number_right;


	for (number_left = 48; number_left <= 56; number_left++)
	{
		for (number_right = 49; number_right <= 57; number_right++)
		{
			if (number_right > number_left)
			{
				putchar(number_left);
				putchar (number_right);
				if (number_left != 56 || number_right != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
