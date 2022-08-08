#include <stdio.h>
#include <stdarg.h>

int add(int args, ...)
{
	va_list ap;

	va_start(ap, args);
	int i = 0, sum = 0;
	for (i = 0; i < args; ++i)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return sum;
}

int main(void)
{
	printf("Add1 = %d\n", add(4, 1, 2, 3, 4) );
    printf("Add2 = %d\n", add(8, 10, 220, 30, 400, 501, 543, 334, 554) );

	return 0;
}
