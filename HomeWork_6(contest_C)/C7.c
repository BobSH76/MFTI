
/*
 * C7.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Составить функцию, которая переводит число N из десятичной системы
 * счисления в P-ичную систему счисления.
 * 
 */


#include <stdio.h>


unsigned long int conv(int num, int sys)
{
	unsigned long int rez=1,a=0;
	while (num/sys>=1)
	{
		rez=rez*10+num%sys;
		num=num/sys;
	}
	rez=rez*10+num;
	
	a=rez;
	num=0;						//переворачиваем результат
	while (a!=0) {
		num=(num*10)+(a%10);
		a=a/10;
	}
	num=num/10;					//убираем лишний знак :))
	return num;
}


int main(void)
{
    int n, s;
 
		scanf ("%d %d", &n, &s);
//		conv(n,s);
		printf("%ld ", conv(n,s));


	return 0;
}

