#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	while (c <= 16)
	{
		printf("%d\n", c % 16);
	}
	return (0);
}
