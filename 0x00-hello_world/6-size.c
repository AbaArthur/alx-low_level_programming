#include <stdio.h>
/**
 * main - A programme that prints  size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %lu byte(s)\n", (unassigned long)
sizeof(a));
printf("size of a int: %lu byte(s)\n", (unassigned long)
sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unassigned long)
sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unassigned long)
sizeof(d));
printf("size of a float: %lu byte(s)\n", (unassigned long)
sizeof(f));
return (0);
}
