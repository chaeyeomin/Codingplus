#pragma warning(disable : 4996)
#include<stdio.h>

int main()
{
	char c;
	scanf("%c", &c);
	char* cPointer = &c;
	printf("%p", cPointer);
	return 0;
}
