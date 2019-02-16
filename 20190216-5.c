#pragma warning(disable : 4996)
#include<stdio.h>

int main()
{
	int i;
	scanf("%d", &i);
	int* iPointer = &i;
	printf("%p", iPointer);
	return 0;
}
