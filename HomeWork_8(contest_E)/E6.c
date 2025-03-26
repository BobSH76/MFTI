/*
 * E6.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.
 * Input format
 * 12 целых чисел через пробел
 * Output format
 * Среднее арифметическое в формате "%.2f"
 * 
 * Input: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
 * Output: 1.08
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 12

int main(void){
	int arr[val];
	float sum=0;
	for (int i =0; i < val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	
	for (int i =0; i < val; i++) {// поиск макс
		{
			sum=sum + arr[i];
		}
	}

	printf("%.2f",sum/val);

    return 0;
}
