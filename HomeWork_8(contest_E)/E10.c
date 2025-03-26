/*
 * E10.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
 * 
 * Input format
 * 12 целых элементов массива через пробел.
 * Output format
 * 12 целых элементов массива через пробел.
 * 
 * Input:  1 2 3 4 5 6 7 8 9 10 11 12
 * Output: 9 10 11 12 1 2 3 4 5 6 7 8
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 12
#define count 4

int main(void){
	int arr[val];
	int n;
	
		for (int i=0; i<val; i++) // ввод массива
		{
			scanf ("%d", &arr[i]);
		}
		
	for (int c=0; c<count; c++)
	{
		n = arr[val-1];
		for (int i=1; i<val; i++) // поиск макс
		{
				arr[val-i] = arr[val-i-1];
		}
		arr[0]=n;
	}

	for (int i=0; i<val; i++)
	{
		printf("%d ",arr[i]);
	}

    return 0;
}
