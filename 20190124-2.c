#pragma warning(disable : 4996)

#include<stdio.h>



int main()

{

	int a;

	printf("1~9단 중 선택 : ");

	scanf("%d", &a);

	for (int i = 1; i < 10; i++) {

		printf("%d * %d = %d \n", a, i, a * i);

	}

	return 0;

}
