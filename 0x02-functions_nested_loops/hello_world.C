#include <stdio.h>
char fun_name(char, char, char, char, char)
{
	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('\n');

	return 'f' ;
}
int main(void)
{
	char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E';
 char result = fun_name(a, b, c, d, e);

 return (0);
}
