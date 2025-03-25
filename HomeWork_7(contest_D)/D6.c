/*
 * D6.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * Дана строка заканчивающаяся символом точка '.'
 * Напечатать строку наоборот. Реализуйте рекурсивную функцию,
 * которая считывает и печатает строку наоборот. void reverse_string()
 * Input: Hello world!.
 * Output: !dlrow olleH
 * 
 */


#include <stdio.h>


void reverse_string(char s[100]) {
	int i=0;
	char c;
	if ( (c=getchar())!='.' ) reverse_string(s);
	
	s[i++]=c;
	i--;
	if (s[i]!='.') putchar(s[i--]);
}


int main(void){
	char s[100];

	reverse_string(s);

	return 0;
}
