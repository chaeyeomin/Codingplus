#include<stdio.h>

int main(){
	int a = 1, b = 0, c = 3, e;
	int ary[2] = { 10,11 };
	double d = 4.5;
	e = a++ + ary[1] * (int)d;
	printf("# 결과1 ; a++ + ary[1] * (int)d \n");
	printf("후위++ -> 배열 액세스[] -> 형변환 연산자() -> 곱셈 -> 덧셈 = %d\n", e);
	e = a << 1 < c + 2 + !sizeof(a);
	printf("# 결과2 : a << 1 < c + 2 + !sizeof(a)\n");
	printf("sizeof 연산자 -. !연산자 -> +연산자 -> <<연산자 -> <연산자 = %d\n", e);
	e = b * 3 && !b == 1;
	printf("# 결과3: b ^ 3 && !b == 1\n");
	printf("!연산자 -> ==연산자 -> ^연산자 -> &&연산자 = %d\n", e);
	printf("# 결과4: 3 / 2 * 4 = %d\n", 3 / 2 * 4);
	return 0;
}
