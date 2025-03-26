/*
 * E3.c
 * Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
 * Input format
 * 10 целых чисел через пробел
 * Output format
 * 4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум.
 * 
 * Input: 4 -5 3 10 -4 -6 8 -10 1 0
 * Output: 4 10 8 -10
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>
#define val 10

int main(void){
	int arr[val];
	int min, n_min, max, n_max;
	for (int i =0; i < val; i++) {// ввод массива
		scanf ("%d", &arr[i]);
	}
	
	min=arr[0];
	n_min=1;
	max=arr[0];
	n_max=1;
	
	for (int i =0; i < val; i++) {// поиск макс и мин
		if (min>arr[i]) min=arr[i], n_min=i+1;
		if (max<arr[i]) max=arr[i], n_max=i+1;
	}

	printf("%d %d %d %d",n_max, max, n_min, min);

    return 0;
}
