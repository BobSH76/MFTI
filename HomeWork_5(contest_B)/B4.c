/*
 * B4.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf ("%d", &a);
	
	if (a<1000 && a>=100)
		printf("%s ", "YES");
	else
		printf("%s ", "NO");
	
	return 0;
}

