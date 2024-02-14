#include <stdio.h>
/**
 * main - Prints the size of char types on the computer it is compiled and
 * run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of an long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of an long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of an float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
