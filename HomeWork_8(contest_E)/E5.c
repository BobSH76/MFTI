/*
 * E5.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
 * Input format
 * 10 целых чисел через пробел
 * Output format
 * Одно целое число - сумма положительных элементов массива
 * 
 * Input: 4 -5 3 10 -4 -6 8 -10 1 0
 * Output: 26
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 10

int main(void){
	int arr[val];
	int sum=0;
	for (int i =0; i < val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	
	for (int i =0; i < val; i++) {// поиск макс
		if (arr[i]>0)
		{
			sum=sum + arr[i];
		}
	}

	printf("%d",sum);

    return 0;
}
