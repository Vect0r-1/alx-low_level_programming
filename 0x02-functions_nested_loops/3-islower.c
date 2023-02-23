#include "main.h"

/**
 * _islower - checks if the character is lowercase.
 * @c: is the character to be checked
 *
 * Retuen: 1 if character is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
