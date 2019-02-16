#pragma warning(disable : 4996)
#include<stdio.h>

void printMinus() {
	printf("음수입니다\n");
}

void isprime(int a)
{
	printf("%d\n", a);
	if (a < 0) {
		printMinus();
		//printf("%d\n음수입니다", a);
	}
	else {
	}
}

int main()
{
	int a;
	printf("정수 하나를 입력하세요 : ");
	scanf("%d", &a);
	isprime(a);
	return 0;
}

