<Q1>
#pragma warning(disable : 4996)
#include<stdio.h>
int main()
{
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
			printf("\n");
	}
	return 0;
}
