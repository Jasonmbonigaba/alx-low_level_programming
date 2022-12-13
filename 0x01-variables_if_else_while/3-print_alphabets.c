#include <stdio.h>
/**
 * maim - main block
 * Description: print the alphabet in lowercase
 * and the in uppercase, follow by new line
 * return:
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
