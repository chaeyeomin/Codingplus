#include "pch.h"
#include <iostream>
#include<stdio.h>

int main()
{
	int cnt1, cnt2;
	int sum = 0;
	int a;
	cnt1 = 1;
	scanf("%d", &cnt2);
		do {
			printf("n 입력 : %d ", cnt2);
			cnt1 += 1;
			sum += cnt2;
			++cnt2;
		} while (cnt2 >= cnt1);
		printf("합은 %d이다.", a);
	return 0;
}
