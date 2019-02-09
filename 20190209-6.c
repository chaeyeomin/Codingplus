#pragma warning(disable : 4996)
#include<stdio.h>
void Nprint(int n) {
	if (n == 0)
		return ;
	printf("%d ", n);
	Nprint(n - 1);
}

int main()
{
	int n, result;
	scanf("%d", &n);
	Nprint(n);
	return 0;
}
