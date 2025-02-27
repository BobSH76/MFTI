/*
 * C4.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int func(int x)
{
	int res=1;
	if (-2<=x && x<2){
		res=x*x;
	}
	if (x>=2){
		res=x*x+4*x+5;
	}
	if (x<-2){
		res=4;
	}
	return res;
}


int main()
{
	int a=1, max=0;
	while(a!=0)
	{
		scanf ("%d", &a);
		if (max<func(a))
		{
			max=func(a);
		}
	}
	printf ("%d", max);
	return 0;
}

