#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints aphabets in lower cases
 *Description: Get a random it with 5
 * Return: Always 0 (sucess)
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
