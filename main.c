#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int x1 = ft_printf("adasdldkjasdjlkasd%u%u");
	printf("\n");
	int x2 = printf("adasdldkjasdjlkasd%u%u");
	printf("\n");

	printf("%d   %d", x1, x2);
}