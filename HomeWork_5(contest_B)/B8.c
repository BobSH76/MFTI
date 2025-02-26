/*
 * B8.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a, i=1, c=0;
    scanf ("%d", &a);
	while (a/i>=1)					// проверяем когда закончится число
	{
		if ((a/i)%10==9)
			{
				c++;
			}
		i=i*10;		
	}
	if (c==1)
		printf("%s ", "YES");
	else
		printf("%s ", "NO");

	return 0;
}

