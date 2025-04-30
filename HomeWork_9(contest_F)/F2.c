/*
 * F2.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Написать только одну функцию,
 * которая ставит в начало массива все четные элементы,
 * а в конец – все нечетные.
 * Не нарушайте порядок следования чисел между собой.
 * Строго согласно прототипу:. void sort_even_odd(int n, int a[])
 * 
 * Input format
 * Функцийя принмате на вход целые числа.
 * Output format
 * Отсортированный исходный массив
 * 
 * Input:  20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
 * Output: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1
 * 
 * 
 * 
 */


#include <stdio.h>

void sort_even_odd(int size, int a[]){
	int n=0;
	scanf ("%d", &size);

	for (int i=0; i<size; i++) // ввод массива
	{
		scanf ("%d", &a[i]);
	}

	for (int i=size-1; i>=0; i--)
	{
		for (int j=0; j<i; j++)
		{

			if (a[j]%2!=0 && a[j+1]%2==0)
			{
				n=a[j+1];
				a[j+1]=a[j];
				a[j]=n;
			}
		}
	}
		
		for (int i=0; i<size; i++)  // вывод массива
		{
			printf("%d ",a[i]);
		}
}

int main(void){
	int size, a[100];
	sort_even_odd(size=20,a);
return 0;
}
