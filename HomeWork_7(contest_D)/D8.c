/*
 * D8.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Составить рекурсивную функцию.
 * Выведите все числа от A до B включительно, в порядке возрастания,
 * если A < B, или в порядке убывания в противном случае.
 *
 * Input: 5 2
 * Output: 5 4 3 2
 * 
 * Input: 2 7
 * Output: 2 3 4 5 6 7
 * 
 */


#include <stdio.h>


void print_num(int a,int b) {

	printf("%d ",a);
	if (a<b)
	{
		if(a!=b) print_num(a+1,b);
	}
	else
	{
		if(a!=b) print_num(a-1,b);
	}
}

int main(void){
	int a, b;
	
	scanf("%d %d",&a,&b);
	print_num(a,b);
	
	return 0;
}
