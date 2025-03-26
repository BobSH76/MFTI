/*
 * E2.c
 * Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
 * 
 * Input: 4 15 3 10 14
 * Output: 3
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>

int main(void){
	int a, b, c, d, e, min;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	min=a;
	if (min>b) min=b ;
	if (min>c) min=c ;
	if (min>d) min=d ;
	if (min>e) min=e ;
    printf("%d",min);
    return 0;
}
