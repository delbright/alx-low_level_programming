#include "main.h"

/**
 * flip_bits - how bits it take to get from one num to another
 * @n: number
 * @m: number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int num = n ^ m;

	while (num != 0)
	{
		if (num & 1)
			count++;

		num = num >> 1;
	}

	return (count);
}
