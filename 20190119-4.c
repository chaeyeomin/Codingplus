#pragma warning(disable:4996)
#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{
	int i, j, isum;
	int iary[ROW][COL] = { {90,95,100}, {95,85,90} };
	char subj[COL][10] = { "수학","영어", "컴퓨터" };
	double dsum;
	for (i = 0; i < ROW; i++) {
		isum = 0;
		for (j = 0; j < COL; j++) {
			printf("%s=%d", subj[j], iary[i][j]);
			isum += iary[i][j];
		}
		printf(" \n%d차 시험 총합/평균: %d/%.1f \n", i + 1, isum, (double)isum / 3.0);
	}
	return 0;
}
