#include <stdio.h>

/**
 * main - Entry point
 * Description - print alphabet except q & e
 * Return: 0
 */

int main(void)
{
	char i = 'a';
		while (i <= 'z')
		{
			if (i != 'e' && i != 'q')
				putchar(i);
		i++;
		}
		putchar('\n');
		return (0);
}

