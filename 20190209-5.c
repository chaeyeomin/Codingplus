#pragma warning(disable : 4996)
#include<stdio.h>
void Aprint(int n);

int main()
{
	Aprint(0);
	return 0;
}

void Aprint(int n) {
	if (n == 7)
		return;
	else {
		printf("A\n");
		Aprint(n + 1);
	}
}
