/*
 * B9.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a, i=1;
    scanf ("%d", &a);
	while (a/i>=1)					// проверяем когда закончится число
	{
		if ((a/i)%10==1 || (a/i)%10==3 || (a/i)%10==5 || (a/i)%10==7 || (a/i)%10==9)
			{
				printf("%s ", "NO");		// если встретилось нечетное число
				return 0;
			}
		i=i*10;		
	}
		printf("%s ", "YES");


	return 0;
}

