#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>
#define ROW 4
#define COL 3

void add(int ary[ROW][COL])
//void add(int ary[][COL]
//void add(int (*ary)[COL])
{
	for (int i = 0; i < COL; i++)
		for (int j = 0; j < 2; j++) {
			ary[2][i] += ary[j][i];  //*(*(ary + 2) + i) += *(*(ary + j) + i);/*
			                        
			ary[3][i] *= ary[j][i];  //*(*(ary + 3) + i) += *(*(ary + j) + i);/*
		}
}
int main()
{
	int iary[ROW][COL] =
	{ {1, 2, 3}, {4,5,6}, {0,0,0}, {1,1,1} };
	add(iary);
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			printf("%2d ", iary[i][j]);
		printf("\n");
	}
	return 0;
}
