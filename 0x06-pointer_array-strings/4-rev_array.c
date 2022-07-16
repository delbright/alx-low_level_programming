#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: Pointer that stores an integer
 * @n: Number of elements in an array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int swap;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}
