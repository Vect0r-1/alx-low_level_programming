#include "main.h"
#include <unistd.h>

/**
 * _putchar - directs the charactr c to stout
 * @c: the character to print
 *
 * Return: 1 (On success)
 * On error: -1, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
