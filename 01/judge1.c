#include <stdio.h>

int main(void)
{
	int n;

	printf("����: ");
	scanf_s("%d", &n);
	if (n == 1)
		puts("A");
	else if (n == 2)
		puts("B");
	else
		puts("C");
	return 0;
}