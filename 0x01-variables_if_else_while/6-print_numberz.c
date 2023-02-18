#include <stdio.h>

/**
 * main - entry point and main block
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
