/*
 * B6.c
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
	while (a/i>1)					// проверяем когда закончится число
	{
		if ((a/i)%10==(a/(i*10))%10)
			{
				printf("%s ", "YES");
				return 0;		
			}
		else
			{
				i=i*10;
			}
	}
	
	printf("%s ", "NO");;

	return 0;
}

