#include<stdio.h>

 int isum(int a, int b);
 void hprint(void);

int main(void)
{
	int ia, ib, sum;
	hprint();
	while (scanf("%d%d", &ia, &ib) == 2) {
		sum = isum(ia, ib);
		printf("%d와 %d의 합은 = %d\n", ia, ib, sum);
		hprint();
	}
	return 0;
}
int isum(int a, int b)
{
	int sum = a + b;
	return sum;
}

void hprint(void)
{
	printf("정수 2개를 입력하세요 : ");
}
