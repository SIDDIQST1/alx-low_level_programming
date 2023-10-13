#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 ((Success)
 */
int main(void)
{
	char atoz;

	for (atoz = 'z' ; atoz >= 'a' ; atoz--)
	{
		putchar(atoz);
	}
	putchar('\n');
	return (0);
}
