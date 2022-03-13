#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
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
