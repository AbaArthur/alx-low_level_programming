#include <stdio.h>

/**
 * main - Entry to print 
 * Description -  prints all the numbers of base 16 in lowercase
 * return: 0
 */

int main(void)
{
	char letter;
		int num;
		{
			for (num = 0; num <= 9; num++)
			putchar((num % 10) + '0');
			
			for (letter = 'a'; letter <= 'f';  letter++)
		      putchar(letter);
		}
	putchar('\n');
		return (0);
}
