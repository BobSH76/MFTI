/*
 * B3.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a, b, sum=0;
    scanf ("%d %d", &a, &b);
	
	while (a <= b)
	{
		sum=sum+a*a;
		a++;
	}
		printf("%d ", sum);

	return 0;
}



