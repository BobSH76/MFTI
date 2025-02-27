/*
 * C2.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int power(int n, int p)
{
	int res = 1;
	for (int i=0; i<p; i++)
	{
		res *= n;
	}
	return res;
}

int main()
{
	int n,p;
	scanf ("%d %d", &n, &p);
	printf ("%d", power(n,p));
	return 0;
}

