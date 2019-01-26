#pragma warning(disable : 4996)

#include<stdio.h>

int main()

{
	char op;
	int num1;
	int num2;
	int result;
	
	
	printf("연산자 입력(+,-,*,/) : ");
	scanf("%c", &op);
	printf("첫 번째 숫자 입력 : ");
	scanf("%d", &num1);
	printf("두 번째 숫자 입력 : ");
	scanf("%d", &num2);
	switch (op) {
	case '+': 
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	}
	printf("%d %c %d = %d\n", num1, op, num2, result);
	return 0;

}
