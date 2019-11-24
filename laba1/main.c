#include <stdio.h>
#define N 10

int main(void)
{
	int x[N]; // массив из N элементов
	int max = 0; // максимальный элемент
	int min = 1001; // минимальный элемент
	int m = 0; //индекс максимального элемента
	int n = 0; // индекс минимального 
	int i;

	for (i = 0; i < N; i++) //ввод массива
	{
		scanf_s("%d", &x[i]);
		int* ptr;
		ptr = &x[i];
		//поиск минимального и максимального элемента
			if (max < *ptr)
			{
				max = *ptr;
				m = i;
			}
			if (min > *ptr)
			{
				min = *ptr;
				n = i;
			}
	}
		x[m] = min;
		x[n] = max;
	for (i = 0; i < N; i++) // вывод массива
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	return 0;
}
