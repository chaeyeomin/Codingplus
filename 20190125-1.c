#include "pch.h"
#include <iostream>
#include<stdio.h>
int main()
{
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= a; b++) {
			printf("*");
		}
			printf("\n");
	}
	return 0;
}

#include "pch.h"
#include <iostream>
#include<stdio.h>
int main()
{
	for (int a = 5; a >= 1; a--) {
		for (int b = 0; b < a; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

