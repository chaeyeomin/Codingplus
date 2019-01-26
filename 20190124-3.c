#pragma warning(disable : 4996)

#include<stdio.h>



int main()

{

	int num;

	int cnt = 0;

	int sum = 0;

	printf("n 입력 : ");

	scanf("%d", &num);

	do {

		cnt ++;

		sum += cnt;  /* 만약 num에 5를 대입한다면 cnt는 1로 시작 -> 
		                   sum은 1+1로 2가 됨 -> 아직 sum이 num보다 작으니까 다시 실행
						   */

	} while (cnt < num);

	printf("1부터 %d까지의 합은 %d이다.", num, sum );

	return 0;

}
