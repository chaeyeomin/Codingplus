#pragma warning(disable : 4996)
#include<stdio.h>

int main()
{
	int ia, ib;
	char ca = 'A';
	double da = 0.5, db;
	int *iap = &ia, *ibp = &ib, *ip;
	char *cap = &ca;
	double *dap = &da;
	ip = ibp;
	printf("정수 2개를 입력하세요 : ");
	scanf("%d%d", iap, ibp);
	db = (double)*ip;
	printf("%d + %d = %d\n", *iap, *ibp, *iap + *ip);
	printf("++'A' = \ '%c \'\n", ++(*cap));
	printf("0.5 * %.1f = %.1f\n", db, *dap * db);
	return 0;
}
