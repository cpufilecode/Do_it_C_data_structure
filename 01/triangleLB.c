#include <stdio.h>

int main(void)
{
	int n;
	do {
		printf("�� �� �ﰢ���Դϱ�?: ");
		scanf_s("%d", &n);
	} while (n <= 0);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}