#pragma warning(disable : 4996)
#include<stdio.h>

int isPrime(int n);
int Remainder(int m, int n);
int main()
{
	int num;
	printf("# 소수 평가 프로그램입니다. \n");
	printf("임의 정수 1개를 입력하세요 : ");
	scanf("%d", &num);
	if (isPrime(num))
		printf("%d(은)는 소수입니다.\n", num);
	else
		printf("%d(은)는 소수가 아닙니다. \n", num);

	return 0;
}

int isPrime(int n)
{
	for (int i = 2; i <= n / 2; i++)
		if (!Remainder(n, i))
			return 0;
	return 1;
}

int Remainder(int n, int m)
{
	return n % m;
}
