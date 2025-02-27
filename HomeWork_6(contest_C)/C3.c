/*
 * C3.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int middle(int a, int b)
{
	return (a+b)/2;
}

int main()
{
	int a,b;
	scanf ("%d %d", &a, &b);
	printf ("%d", middle(a,b));
	return 0;
}

