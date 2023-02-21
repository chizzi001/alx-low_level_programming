#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: a character
 *
 * Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	char i = (int)c;

	if (isalpha(i))
		return (1);
	return (0);
}
