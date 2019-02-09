#pragma warning(disable : 4996)
#include<stdio.h>
#define COUNT 5

void aryPrint(int ary[]){
	for (int i = 0; i < COUNT; i++)
		printf("%d", ary[i]);
	printf("\n");
}
void aryPlus(int ary[], int n) {
	for (int i = 0; i < COUNT; i++)
		ary[i] = ary[i] + n;
}

int main()
{
	int numAry[COUNT] = { 1, 2, 3, 4, 5 };
	aryPrint(numAry);
	aryPlus(numAry, 5);
	aryPrint(numAry);

	return 0;
}
