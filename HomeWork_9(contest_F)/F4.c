/*
 * F4.c
 * 
 * Copyright 2025 bob <bob@KB_9>
 * 
 * Написать только одну функцию.
 * Всю программу отправлять не надо.
 * Вывести в порядке возрастания цифры, входящие в строку.
 * Цифра - количество. Функция должно строго соответствовать прототипу:
 * void print_digit(char s[])
 * 
 * Input format
 * Строка из английских букв, пробелов, знаков препинания и цифр
 * Output format
 * Функция должна принмать на вход строку и выводить на печать по формату:
 * Цифра пробел количество.
 * 
 * 
 * Input:
 * Hello123 world77.
 * Output:
 * 1 1
 * 2 1
 * 3 1
 * 7 2
 * 
 * 
 * 
 * 
 * 
 * 
 */


#include "stdio.h"

void print_digit(char s[])
{
	int a = 0;
	int count; // счетчик цифр
	
	for (int d = 0; d < 10; d++)
    {
		count = 0;
		// Подсчет цифр
		for (int i = 0; s[i] != '\0'; i++)
		{
			a=s[i]-'0';
			if (a == d) count++;
		}
		if (count > 0)
		{
			printf("%d %d\n", d, count);
		}
	}
}

int main()
{
	char s[100], c;
    int i = 0;
    while ((c=getchar()) != '.')
    {
        s[i++] = c;
    }
//	printf("%d\n",0);
	print_digit(s);

	return 0;
}

