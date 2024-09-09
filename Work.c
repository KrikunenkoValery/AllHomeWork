#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n l = 337\n n = 5"); // цифр до запятой должно быть 5, а после 3 цифры
	printf("\n%d поделить на %d получается %+010.3f", 337, 5, 337./5); // рабыт)
	getchar();
}
