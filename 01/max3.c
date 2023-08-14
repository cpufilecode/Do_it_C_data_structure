#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("세 정수의 최댓값을 구합니다. \n");
	printf("a값: "); scanf_s("%d", &a);
	printf("b값: "); scanf_s("%d", &b);
	printf("c값: "); scanf_s("%d", &c);

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("최대값은 %d입니다.\n", max);

	return 0;
}