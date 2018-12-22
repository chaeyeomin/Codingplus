// ConsoleApplication50.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
	int i, sum = 0;
	printf("입력 :");
	scanf("%d", &i);
	for (int j=1; j <= i; j++)
	{
		if (j > 1000)
			break;
		sum += j;
	}
	printf("출력 : %d \n", sum);
    return 0;
}

