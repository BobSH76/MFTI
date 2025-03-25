/*
 * D4.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * Дано натуральное число N. Выведите все его цифры по одной,
 * в прямом порядке, разделяя их пробелами или новыми строками.
 * Необходимо реализовать рекурсивную функцию. void print_num(int num)
 * Input: 54321
 * Output: 5 4 3 2 1
 * 
 */


#include <stdio.h>

static int b, i=1;
void print_num(int num) {
	if (b==0) {
		printf("%d ",b);
		return;
	}	
	if(num>0) {
		 i=i*10;
		 print_num(num/10);
	}
	i=i/10;
	if (i>0) printf("%d ",(b/i)%10);
	
}

int main(void){
	
	scanf("%d", &b);
	print_num(b);
	
	return 0;
}
