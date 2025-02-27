/*
 * C1.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int abs(int a)
{
	return (a<0)?-a:a;
}

int main()
{
	int a;
	scanf ("%d", &a);
	printf ("%d", abs(a));
	return 0;
}

