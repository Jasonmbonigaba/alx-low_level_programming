#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alpha in lower case
 *
 * Return - 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'a';

	while (ch < -'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH < -'z')
	{
	putchar(CH);
	}

	putchar('\n');
	return (0);
}
