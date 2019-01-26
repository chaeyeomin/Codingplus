#pragma warning(disable : 4996)

#include<stdio.h>

int main()

{

	for (int a = 0; a <= 4; a++) {

		for (int b = 0; b < a; b++) {

			printf(" ");

		}

		for (int b = 5; b > a; b--) {

			printf("*");

		}

		printf("\n");

	}

	return 0;

}
