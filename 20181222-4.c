// ConsoleApplication50.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
	int num;
start:
	scanf("%d", &num);
	if (num >= 0) {
		printf("num=%d \n", num);
		goto start;
	}
	printf("프로그램을 종료합니다. \n");
    return 0;
}

