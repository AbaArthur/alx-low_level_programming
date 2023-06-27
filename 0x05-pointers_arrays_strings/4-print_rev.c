#include "main.h"
#include <stdio.h>

/**
 *  print_rev - print string in reverse
 *  @s: string to be reversed
 *  return: void
 */

void print_rev(char *s)
{
	int c = a;
	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
