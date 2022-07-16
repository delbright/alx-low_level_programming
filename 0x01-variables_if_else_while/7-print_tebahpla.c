#include <stdio.h>
/**
 * main - Prints the lower case alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha_low = 'z';

while (alpha_low >= 'a')
{
	putchar(alpha_low);
	alpha_low--;
}
putchar('\n');
return (0);
}
