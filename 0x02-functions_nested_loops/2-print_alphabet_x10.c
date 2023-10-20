#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: ALways 0
 */
void print_alphabet_x10(void)
{
	char lower_alphabet;
	int timer = 0;

	while (timer <= 9)
	{
		for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
		{
		putchar(lower_alphabet);
		}
	putchar('\n')
	timer++;
	}
}
