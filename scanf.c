#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
// Задание 1
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int k;
	float del;
	printf("Лошок введи число:");
	scanf("%d%d", &n, &k);
	del = k % n;
	printf("сумма = %d, разность = %d, произведение = %d, частное = %d, остаток деления = %f", \
		k + n, k - n, k * n, k / n, del);
	getchar();
}