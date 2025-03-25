/*
 * D20.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Написать рекурсивную функцию возведения целого числа n в степень p.
 * int recurs_power(int n, int p) Используя данную функцию, решить задачу.
 * 
 * Input: 2 3
 * Output: 8
 * 
 */


#include <stdio.h>

static int mul=1;
int recurs_power(int n, int p) {
	
	if(p>1) recurs_power(n, p-1);
	mul = mul * n;
	if(p==0) mul=1;
	
	return mul;
}

int main(void){
	int n,p;
	scanf("%d %d", &n, &p);
	printf("%d",recurs_power(n, p));
	
	return 0;
}
