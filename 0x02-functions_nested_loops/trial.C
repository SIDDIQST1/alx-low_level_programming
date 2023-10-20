#include <stdio.h>
int trial();
int main(void)
{
	int a=1;
	int b = trial();
	printf("%d\n %d\n", a, b);
}
int trial()
{
	return(2);
}
