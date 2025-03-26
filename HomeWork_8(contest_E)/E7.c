/*
 * E7.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Считать массив из 10 элементов и выполнить инверсию отдельно
 * для 1-ой и 2-ой половин массива.
 * Необходимо изменить считанный массив и напечатать его одним циклом.
 * 
 * Input format
 * 10 целых элементов массива через пробел.
 * Output format
 * 10 целых элементов массива через пробел.
 * 
 * Input:  1 2 3 4 5 6 7 8 9 10
 * Output: 5 4 3 2 1 10 9 8 7 6
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 10

int main(void){
	int arr[val];
	int num=0;
	for (int i =0; i < val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	
	for (int i =0; i < val/2-3; i++) {// поиск макс
			num = arr[i];
			arr[i] = arr[val/2-i-1];
			arr[val/2-i-1] = num;

			num = arr[val/2+i];	
			arr[val/2+i] = arr[val-i-1];
			arr[val-i-1] = num;
	}

	for (int i =0; i < val; i++) {
		printf("%d ",arr[i]);
	}

    return 0;
}
