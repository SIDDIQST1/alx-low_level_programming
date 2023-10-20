#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		putchar(lower_alphabet);
	}
putchar('\n');
}
