/*
 * D7.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Составить рекурсивную функцию, печать всех чисел от N до 1.
 *
 * Input: 5
 * Output: 5 4 3 2 1
 * 
 */


#include <stdio.h>


void print_num(int b) {

	printf("%d ",b);
	if(b>1) print_num(b-1);	
}

int main(void){
	int b;
	
	scanf("%d", &b);
	print_num(b);
	
	return 0;
}
