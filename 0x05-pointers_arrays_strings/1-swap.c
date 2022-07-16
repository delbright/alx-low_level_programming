#include "main.h"
/**
 * swap_int -> swaps the value of the two integers
 * @a: pointer that stores value
 * @b: pointer that stores value
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int e = *a;
	*a = *b;
	*b = e;
}
