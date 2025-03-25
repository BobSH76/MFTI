/*
 * D5.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * Перевести натуральное число в двоичную систему счисления.
 * Необходимо реализовать рекурсивную функцию.
 * Input: 5
 * Output: 101
 * 
 */


#include <stdio.h>


void dec_to_bin(int b) {

	if(b>=2) dec_to_bin(b/2);
	if (b>=0) printf("%d",b%2);
	b=b/2;
	
}

int main(void){
	int b;
	scanf("%d", &b);
	dec_to_bin(b);
	
	return 0;
}
