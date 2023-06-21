#include <stdio.h>

/**
 *main - Entry Point
 * Description - prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
		return (0);
}
