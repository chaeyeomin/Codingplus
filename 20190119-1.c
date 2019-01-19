#pragma warning(disable:4996)
#include<stdio.h>
#define Limit 4

int main()
{
	int i, num, find = 0;
	int iary[Limit] = { 1,2,3,4 };
	char cary[Limit] = { 'A', 'B', 'C', 'D' };
	printf("어떤 정수 중 찾으려는 숫자를 입력하시오 : ");
	scanf("%d", &num);
	for (i = 0; i < Limit; i++)
		if (num == iary[i]) {
			printf("%d(이)가 iary[%d]에 있습니다. \n", num, i);
			find = 1;
			break;
		}
	if (!find)
		printf("%d(이)가 iary[]에 없습니다. \n", num);
	for (i = 0; i < Limit; i++)
		printf("iary[%d]=%d \t cary[%d]=%c\n", i, iary[i], i, cary[i]);
	return 0;
}
