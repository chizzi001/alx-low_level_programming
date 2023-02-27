#include "main.h"

/**
 * rev_string - a function that reverses a string
 * followed by a new line
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char f;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		f = s[i];
		s[i++] = s[len];
		s[len] = f;
	}
}
