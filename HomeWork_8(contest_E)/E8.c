/*
 * E8.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.
 * 
 * Input format
 * 12 целых элементов массива через пробел.
 * Output format
 * 12 целых элементов массива через пробел.
 * 
 * Input:  1 2 3 4 5 6 7 8 9 10 11 12
 * Output: 4 3 2 1 8 7 6 5 12 11 10 9
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 12

int main(void){
	int arr[val];
	int num=0;
	for (int i =0; i < val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	
	for (int i =0; i < val/3-2; i++) {// поиск макс
			num = arr[i];
			arr[i] = arr[val/3-i-1];
			arr[val/3-i-1] = num;

			num = arr[val/3+i];	
			arr[val/3+i] = arr[(val/3)*2-i-1];
			arr[(val/3)*2-i-1] = num;

			num = arr[(val/3)*2+i];	
			arr[(val/3)*2+i] = arr[val-i-1];
			arr[val-i-1] = num;
	}

	for (int i =0; i < val; i++) {
		printf("%d ",arr[i]);
	}

    return 0;
}
