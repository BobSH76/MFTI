/*
 * F6.c
 * 
 * Написать только одну логическую функцию, которая определяет,
 * верно ли, что среди элементов массива есть два одинаковых.
 * Если ответ «да», функция возвращает 1; если ответ «нет», то 0.
 * Строго согласно прототипу: int is_two_same(int size, int a[]);
 *
 * Input format
 * Массив состоящий из целых чисел.
 * Output format
 * Функция возвращает 1 или 0
 * 
 * Input: 1 2 3 4 5
 * Output: NO
 * 
 * 
 * 
 */


#include "stdio.h"

int is_two_same (int size, int a[])
{
	int num = a[0], r = 0;
		for (int i = 0; i < size; i++)
		{
			num = a[i];
			for (int n = i+1; n < size; n++)
			{
				if (num == a[n])
				{
					r=1;
					break;
				}
			}
		}
	return r;
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
//	find_max_array (size, arr);
	printf("%d", is_two_same (size, arr));
	return 0;
}

