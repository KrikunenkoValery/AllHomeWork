#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("����:\n l = 337\n n = 5"); // ���� �� ������� ������ ���� 5, � ����� 3 �����
	printf("\n%d �������� �� %d ���������� %+010.3f", 337, 5, 337./5); // �����)
	getchar();
}
