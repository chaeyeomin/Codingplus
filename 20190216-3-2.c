#pragma warning(disable : 4996)
#include<stdio.h>

int addplusoneWithPointer(int *a) {
	*a += 1;
	return *a;
}

int addplusone(int a) {
	a += 1;
	return a;
}

int main() {
	int num;
	scanf("%d", &num);
	num = addplusone(num);
	printf("num %d", num);
}



//5 -> num 6
