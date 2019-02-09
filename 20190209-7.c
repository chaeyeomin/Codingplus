#pragma warning(disable : 4996)
#include<stdio.h>
#define ROW 3

void aprint(int ary[ROW])
{
	for (int i = 0; i < ROW; i++)
		printf("%d ", ary[i]);
	printf("\n");
}

void add(int ary[ROW])
{
	printf("ary = %zd, %p\n", sizeof(ary[0]), ary);
	for (int i = 0; i < ROW; i++)
		ary[i] += 1;
}
int main() {
	int iary[ROW] = { 1, 2, 3 };
	printf("iary = %zd, %p\n", sizeof(iary), iary);
	aprint(iary);
	add(iary);
	aprint(iary);
	return 0;
}
