#include "main.h"

/**
 * print_alphabet - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int timer = 0;
	char lower_alpha;

	while (timer <= 9)
	{
		for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
		{
			putchar(lower_alpha);
		}
		putchar('\n');
		timer++;
	}
}
