#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints aphabets in lower cases
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
