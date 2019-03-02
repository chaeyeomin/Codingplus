#pragma warning(disable:4996)
#include<stdio.h>

struct student {
	char name[5];
	int score;
};

int main()
{
	struct student student[5] = {};
	int i;
	int maxIndex = 0;
	int maxScore = 0;

	for (i = 0; i <= 4; i++) {
		printf("%d. 이름, 점수를 입력하시오. : ", i+1);	
		scanf("%s %d", student[i].name, &student[i].score);
	}

	for (i = 0; i < 5; i++) {
		if (maxScore < student[i].score) {
			maxScore = student[i].score;
			maxIndex = i;
		}
	}

	printf("최고 점수 : %s %d", student[maxIndex].name, maxScore);
	return 0;
}
