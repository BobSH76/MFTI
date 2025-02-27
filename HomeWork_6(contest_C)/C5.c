/*
 * C5.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int func(int n)
{
	int res = 0;
	for (int i=0; i<=n; i++)
	{
		res = res+i;
	}
	return res;
}


int main()
{
	int a;

	scanf ("%d", &a);

	printf ("%d", func(a));
	
	return 0;
}

