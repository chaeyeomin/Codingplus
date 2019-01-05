#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)
int main() 
{
	printf("홀짝 게임을 시작합니다. \n");
	printf("(1: 홀, 2: 짝)\n");
	int myOE, comOE;   //O(홀)-E(짝)
	srand(time(NULL));
	printf("선택 : ");
	scanf("%d", &myOE);
		comOE = rand() % 2 + 1;
		printf("User : ");
		(myOE == 1) ? printf("홀\n") : printf("짝\n");
		printf("Computer : ");
		(comOE == 1) ? printf("홀\n") : printf("짝\n");
		if (comOE == myOE) printf("맞았습니다. ");
		else {
			printf("틀렸습니다.");
		}
	return 0;
}
