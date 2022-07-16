#include <stdio.h>
/**
 * main - printing all single digits number from base 10 using putchar()
 *
 * Return: Always 0
 */
int main(void)
{
int decimal = 0;

while (decimal <= 9)
{
	putchar((decimal % 10) + '0');
	decimal++;
}
putchar('\n');
return (0);
}
