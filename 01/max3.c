#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�� ������ �ִ��� ���մϴ�. \n");
	printf("a��: "); scanf_s("%d", &a);
	printf("b��: "); scanf_s("%d", &b);
	printf("c��: "); scanf_s("%d", &c);

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("�ִ밪�� %d�Դϴ�.\n", max);

	return 0;
}