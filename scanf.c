#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
// ������� 1
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int k;
	float del;
	printf("����� ����� �����:");
	scanf("%d%d", &n, &k);
	del = k % n;
	printf("����� = %d, �������� = %d, ������������ = %d, ������� = %d, ������� ������� = %f", \
		k + n, k - n, k * n, k / n, del);
	getchar();
}