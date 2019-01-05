#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)
int main() 
{
	int i, j, num;
	printf("입력 : ");
	scanf("%d %d", &i, &j);
	srand(time(NULL));
	num = rand() % j;
	while (i > num || num > j) {
		num = rand() % j;
	}

	printf("출력 : %d", num);
	return 0;
}
