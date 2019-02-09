#pragma warning(disable : 4996)
#include<stdio.h>
int get_sum(int n);
void get_ave(int n);

int main()
{
	int n;
	scanf("%d", &n);
	get_ave(n);
}

int get_sum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합 = %d입니다. \n", n, sum);
	return sum;
}

void get_ave(int n) {
	double ave;
	ave = (double)get_sum(n) / n;
	printf("1부터 %d까지의 평균 = %.2f입니다.\n", n, ave);
	return;
}
