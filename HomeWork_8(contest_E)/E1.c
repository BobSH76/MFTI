/*
 * E1.c
 * Ввести c клавиатуры массив из 5 элементов,
 * найти среднее арифметическое всех элементов массива.
 * 
 * Input: 4 15 3 10 14
 * Output: 9.200
 * 
 * 
 * 
 */


#include <stdio.h>
//#include <locale.h>

int main(void){
	float s;
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    s=(a+b+c+d+e)/5.0;
    printf("%.3f",s);
    return 0;
}
