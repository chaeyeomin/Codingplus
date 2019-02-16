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

int arraySort(int * arr) {
	arr[0] = 3;
	return 0;
}

int main() {
	int arr[5] = {0,1,2,3,4};
	arraySort(arr);
	int num;
	//scanf("%d", &num);
	//num = addplusone(num);
	printf("num %d", arr[0]);
}


//5 -> num 6
