#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char alphabet; 

	for (char alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}