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
		printf("%d", under10);

		++under10;
	}
	printf("\n");
return (0);
}
