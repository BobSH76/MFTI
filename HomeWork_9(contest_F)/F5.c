/*
 * F5.c
 * 
 * Написать только одну функцию, которая находит максимальный элемент в массиве.
 * Всю программу загружать не надо.
 * Прототип функции: int find_max_array(int size, int a[])
 *
 * Input format
 * Массив состоящий из целых чисел. Первый аргумент, размер массива, второй аргумент адрес нулевого элемента.
 * Output format
 * Одно целое число
 * 
 * Input: 1 2 3 4 5
 * Output: 5
 * 
 * 
 * 
 */


#include "stdio.h"

int find_max_array(int size, int a[])
{
	int max = a[0];
		for (int i = 0; i < size; i++)
		{
			if (max < a[i]) max=a[i];
		}
//		printf("%d", max);
	return max;
}

int main()
{
	int size=0;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
	find_max_array (size, arr);

	return 0;
}

