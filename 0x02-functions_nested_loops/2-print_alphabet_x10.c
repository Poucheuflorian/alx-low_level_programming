#include "main.h"
void print_alphabet_x10(void)
{
int count;
char c;
for (count=0;count<=9;count++)
{	for (c='a';c<='z';c++)
		_putchar(c);
_putchar('\n');
}
}