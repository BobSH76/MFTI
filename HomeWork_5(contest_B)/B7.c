/*
 * B7.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a, i=1, c=10;
    scanf ("%d", &a);
	while (a/i>=1)					// проверяем когда закончится число
	{
		c=10;
		while (a/(i*c)>=1)
			{
			if ((a/i)%10==(a/(i*c))%10)
				{
					printf("%s ", "YES");
					return 0;		
				}
			else
				{
					c=c*10;
				}
			}
		i=i*10;
	}
	printf("%s ", "NO");;

	return 0;
}

