#include <stdio.h>

int main(void)
{
	int n;
	puts("1���� n������ ������ ���մϴ�.");
	printf("n��: ");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	printf("1���� %d������ ������ %d�Դϴ�.\n", n, sum);

	return 0;
}