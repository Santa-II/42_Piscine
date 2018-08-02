#include "ft_abs.h"
#include <stdio.h>
int main()
{
	printf("%d, %d\n", ABS(15), 15);
	printf("%d, %d\n", ABS(0), 0);
	printf("%d, %d\n", ABS(-25), 25);
	printf("%d, %d\n", ABS(1234567), 1234567);
	printf("%d, %d\n", ABS(-1234567), 1234567);
	printf("%d, %d\n", ABS(-2147483648), 0);
	return (0);
}
