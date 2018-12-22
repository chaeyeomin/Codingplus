// ConsoleApplication50.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
	int num, diff;
	printf("-128 ~ 127사이의 정수 1개를 입력 :");
	while (scanf("%d", &num) == 1) {
		if (num < -128 || num > 127) {
			//diff = (num < 0) ? num + 128 : num - 127;
			
			if (num < 0) {
				diff = num + 128;
			}
			else {
				diff = num - 127;
			}
			goto label;
		}
		else {
			if (num == 0) {
				printf("0은 부호가 없습니다. \n");
				goto ReInput;
			}
				(num < 0) ? printf("음수입니다. \n")
					: printf("양수입니다.\n");
			}
		ReInput: printf("-128 ~ 128 사이의 정수 1개를 입력 : ");
		}
	label: printf("%d만큼 영역을 벗어났습니다. \n", diff);
    return 0;
}

