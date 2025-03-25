/*
 * D9.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Дано натуральное число N. Вычислите сумму его цифр.
 * Необходимо составить рекурсивную функцию int sum_digits(int n).
 * 
 * Input: 123
 * Output: 6
 * 
 */


#include <stdio.h>

static int sum=0;
int sum_digits(int n) {
	if(n>1) sum_digits(n/10);
	sum = sum + (n%10);
	
	return sum;
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d",sum_digits(n));
	
	return 0;
}
