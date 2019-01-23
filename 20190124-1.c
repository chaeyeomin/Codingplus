#include "pch.h"
#include <iostream>
#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("첫 번째 숫자 입력 : %d \n", a);
	scanf("%d", &a);
	printf("두 번째 숫자 입력 : %d \n", b);
	scanf("%d", &b);
	if (a < b) {
		printf("두 번째 입력한 값이 더 크다.");
	}
	if (a = b) {
		printf("첫 번째 입력한 값과 두 번째 입력한 값이 같다.");
	}
	return 0;
}
