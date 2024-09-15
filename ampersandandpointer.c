
/* ampersandandpointer.c */

#include <stdio.h>

#define F fflush(stdout)

int addition(int a, int b)
{
	int result;
	result = a + b;
	
	return result;
}
int main()
{
	int a, b;
	
	printf("Write a :\n"); F;
	scanf("%d", &a);

	printf("Write b :\n"); F;
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, addition(a, b));

	return 0;
}
