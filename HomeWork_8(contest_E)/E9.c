/*
 * E9.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
 * 
 * Input format
 * 10 целых элементов массива через пробел.
 * Output format
 * 10 целых элементов массива через пробел.
 * 
 * Input:  1 2 3 4 5 6 7 8 9 10
 * Output: 10 1 2 3 4 5 6 7 8 9
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 10

int main(void){
	int arr[val];
	int n;
	
	for (int i=0; i<val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	n = arr[val-1];
	for (int i=1; i<val; i++) {// поиск макс
			arr[val-i] = arr[val-i-1];
	}
	arr[0]=n;

	for (int i=0; i<val; i++) {
		printf("%d ",arr[i]);
	}

    return 0;
}
