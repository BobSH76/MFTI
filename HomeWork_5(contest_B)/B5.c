/*
 * B5.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a, sum=0;
    scanf ("%d", &a);
	
	sum = a%10;
	sum += (a/10)%10;
	sum += (a/100)%10;
	sum += (a/1000)%10;
	sum += (a/10000)%10;
	sum += (a/100000)%10;
	sum += (a/1000000)%10;
	
	printf("%d ", sum);

	return 0;
}

