#include <stdio.h>

/**
 * swap_int - to swap value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	}
