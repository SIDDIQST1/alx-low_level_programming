#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a %lu\n", sizeof(char));
	printf("Size of an %lu\n", sizeof(int));
	printf("Size of a %lu\n", sizeof(long int));
	printf("Size of a %lu\n", sizeof(long long int));
	printf("Size of a %lu", sizeof(float));
	return (0);
}
