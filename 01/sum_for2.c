#include <stdio.h>

int main(void)
{
	int n;
	puts("1���� n������ ������ ���մϴ�.");
	do {
		printf("n��: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	printf("1���� %d������ ������ %d�Դϴ�.\n", n, sum);

	return 0;
}