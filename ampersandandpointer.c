
/* ampersandandpointer.c */

#include <stdio.h>

#define F fflush(stdout)

void addition(int a, int b, int *target)
{
	*target = a + b;
}
int main()
{
	int a, b, result;
	
	printf("Write a :\n"); F;
	scanf("%d", &a);

	printf("Write b :\n"); F;
	scanf("%d", &b);
	
	addition(a, b, &result);

	printf("%d + %d = %d\n", a, b, result);

	return 0;
}
