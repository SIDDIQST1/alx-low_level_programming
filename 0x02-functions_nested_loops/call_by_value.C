#include <stdio.h>
int fun_name(int x, int y);
int main(void)
{
	int a = 10, b = 20, sum;
	sum = fun_name(a, b);
printf("the sum is %d\n",sum);
	return (0);
}
int fun_name(int x, int y)
{
	return (x + y);
}
