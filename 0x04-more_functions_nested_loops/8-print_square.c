#include "main.h"
/**
 * print_square - prints a square
 * @size: test character
 */
void print_square(int size)
{
	int height = 0;
	char length;

	while (height++ <= size)
	{
		for (length = 0; length <= size; length++)
			_putchar('#');
			_putchar('\n');
	}
}
