#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point and main block
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
