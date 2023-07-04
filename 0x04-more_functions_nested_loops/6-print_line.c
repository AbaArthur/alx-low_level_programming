#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n -  the number of times the character _ should be printed
 * return: If n is 0 or less, the function should only print
 */

void print_line(int n)
{
	int x;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
	_putchar('\n');
}
