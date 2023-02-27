#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: an input integer
 * @b: an input integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
