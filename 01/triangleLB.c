#include <stdio.h>

int main(void)
{
	int n;
	do {
		printf("몇 단 삼각형입니까?: ");
		scanf_s("%d", &n);
	} while (n <= 0);


}