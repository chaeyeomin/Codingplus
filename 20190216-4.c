#pragma warning(disable : 4996)
#include<stdio.h>

int main()
{
	int i;
	double d;
	char c;
	int *iPointer = &i;
	double *dpointer = &d;
	char *cPointer = &c;

	printf("%p\n", iPointer);
	printf("%p\n\n", &i);
	printf("%p\n", dpointer);
	printf("%p\n\n", &d);
	printf("%p\n", cPointer);
	printf("%p\n", &c);

	return 0;
}
