/*
 * E4.c
 * Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
 * Input format
 * 10 целых чисел через пробел
 * Output format
 * Сумма двух максимальных элементов.
 * 
 * Input: 4 -5 3 10 -4 -6 8 -10 1 0
 * Output: 18
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 10

int main(void){
	int arr[val];
	int max, mmax;
	for (int i =0; i < val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	
	max=arr[0];
	mmax=arr[0];
	
	for (int i =0; i < val; i++) {// поиск макс
		if (max<arr[i])
		{
			mmax=max;
			max=arr[i];
		}
		else
		{
			if (mmax<arr[i] || mmax==max)
			{
				mmax=arr[i];
			}
		}
	}

	printf("%d",max+mmax);

    return 0;
}
