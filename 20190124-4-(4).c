#pragma warning(disable : 4996)

#include<stdio.h>

int main()

{

	for (int a = 4; a >= 0; a--) {

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
