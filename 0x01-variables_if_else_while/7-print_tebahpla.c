#include <stdio.h>

/**
 * Main - Entry Point to print reverse alphabet
 * Description - prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
		return (0);
}
