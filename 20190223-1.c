#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>

int main()
{
	int a, b;
	printf("입력 : ");

	scanf("%d %d", &a, &b);
	int arr[3] = { a, b, 0 };
	printf("출력 :%d %d\n", a, (*(arr + 0)) + (*(arr + 1)));  //printf("출력 :%d %d", a, arr[0] + arr[1]); /*
	return 0;
}
