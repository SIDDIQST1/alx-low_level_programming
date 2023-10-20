#include <stdio.h>
int fun_name(int *point1, int *point2);
int main(void)
{
	int x = 10, y = 20, sum;
	sum = fun_name(&x, &y);
	printf("The sum of x and y is =%d\n", sum);
}
int fun_name(int *point1, int *point2)
{
	*point1 = 20;
	*point2 = 30;
	return (*point1 + *point2);
}
