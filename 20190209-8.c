#pragma warning(disable : 4996)
#include<stdio.h>
#define COUNT 5
void aryPrint(int ary[]) {
	for (int i = 0; i < COUNT; i++)
		printf("%d", ary[i]);
}

int main()
{
	int numAry[COUNT] = { 1, 2, 3, 4, 5 };
	aryPrint(numAry);
	return 0;
}
