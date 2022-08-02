#include <stdio.h>
/*
*main - print the name of the file it was compiled from
*/
void main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
