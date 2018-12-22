// ConsoleApplication50.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
	int i, sum = 0;
	printf("입력 :\n");
	scanf("%d", &i);
	printf("출력 : \n");
	for (int j = 0; j < i; j++)
	{
		int num;
		printf("\n 숫자를 입력하시오 :");
		scanf("%d", &num);
		if(num % 2 !=0)
			sum += num;
	}
	printf("%d \n", sum);
    return 0;
}

