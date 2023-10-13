#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int under10;

	while (under10 < 10)
	{
		putchar((under10 % 10) + '0');

		++under10;
	}
	putchar('\n');
return (0);
}
