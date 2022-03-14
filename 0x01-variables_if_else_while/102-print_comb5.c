#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print all possible different combination
 * of two to-digit numbers
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
	for (m = 0; m < 100; m++)
	{
	if (n < m)
	{
	putchar((n / 10) + 48);
	putchar((n % 10) + 48);
	putchar(32);
	putchar((m / 10) + 48);
	putchar((m % 10) + 48);
	if (n != 98 || m != 99)
	{
	putchar(44);
	putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
