#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int na;
	printf("��� ����: ");
	scanf_s("%d", &na);
	int* a = calloc(na, sizeof(int));

	if (a == NULL)
		puts("�޸� Ȯ���� �����߽��ϴ�.");
	else {
		printf("%d���� ������ �Է��ϼ���. \n", na);
		for (int i = 0; i < na; i++) {
			printf("a[%d]: ", i);
			scanf_s("%d", &a[i]);
		}
		printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
		for (int i = 0; i < na; i++)
			printf("a[%d] = %d\n", i, a[i]);
		free(a);
	}

	return 0;
}