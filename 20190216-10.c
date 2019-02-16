#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ALPHA 26

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p;
	p = arr;

	for (int i = 0; i < 10; i++)
		printf("%d", p[i]);

	return 0;
}
