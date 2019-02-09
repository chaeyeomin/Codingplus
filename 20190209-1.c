#pragma warning(disable : 4996)
#include<stdio.h>

int get_mul(int a, int b);

int main() {
	int a, b;
	printf("가로와 세로 길이를 차례대로 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("넓이는 %d입니다.", get_mul(a, b));

	return 0;
}
int get_mul(int a, int b) {
	return a * b;
}
