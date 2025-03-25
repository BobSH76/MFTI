/*
 * D2.c
 * Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
 * Input: 5
 * Output: 15
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>

static int tmp=0;
	
int rec(int n) {
	if(n>0) rec(n-1);
	tmp = tmp+n;
    return tmp;
}

int main(void){
	int b;
	scanf("%d", &b);
 //   rec(b);
    printf("%d\n",rec(b));
    return 0;
}
