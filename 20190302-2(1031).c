#pragma warning(disable:4996)
#include<stdio.h>

int getTenPosition(int cnt) {
	if (cnt == 0)
		return 1;

	int r = 10;
	for (int i = 1; i < cnt; i++) {
		r *= 10;
	}
	return r;
}

int main()
{
	int num;
	int result = 0;
	int cnt = 0;

	scanf("%d", &num);
	
	//printf("%d\n", r);

	while (1) {
		int remain = num % 8;
		num = num / 8;
		result += remain * getTenPosition(cnt); 
		cnt++; // 1
		if (num < 8) {
			result += num * getTenPosition(cnt);

			break;
		}

	}

	printf("%d", result);
}
