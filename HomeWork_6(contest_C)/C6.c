/*
 * C6.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

unsigned long long int func(int n)
{
	unsigned long long int res = 1;
	for (int i=1; i<n; i++){
		res = res*2;
	}
	return res;
}


int main()
{
	int a;

	scanf ("%d", &a);

	printf ("%llu", func(a));
	
	return 0;
}

