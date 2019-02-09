#pragma warning(disable : 4996)
#include<stdio.h>
long long int fact(long long int n);
int main()
{
	int num;
	long long int result;
	printf("Type a number : ");
	scanf("%d", &num);
	result = fact(num);
	printf("%d! = %11d\n", num, result);
	return 0;
}

long long int fact(long long int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}
