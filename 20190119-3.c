#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;  //배열에 저장
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", arr[i]);  //값 출력
	}
	return 0;
}
