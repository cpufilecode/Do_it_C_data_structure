#include <stdio.h>

#define N 5
int main()
{
	int a[N];
	for (int i = 0; i < N; i++) {
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	puts("�� ����� ��"); 
	for (int i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}