#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:A program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	c = 0;

	while (c <= 5)
	{
		putchar(97 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
