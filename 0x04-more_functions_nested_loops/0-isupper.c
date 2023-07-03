#include "main.h"

/**
 * _isupper - checks for upper case character
 * @k: The character to be checked
 * Return: 1 for upper case character or 0 for anything else
 */

int _isupper(int k)
{
	if (k >= 65 && k <= 90)
	{
	return (1);
	}
	else
		return (0);
}
