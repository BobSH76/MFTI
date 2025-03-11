/*
 * C8.c
 */


#include <stdio.h>
//#include <locale.h>

char sim(char character)
{
	if (character > 96)
	{
		character = character - 32; 		// вывести этот символ
	}
		return character;
}

int main (void)
	{
	char character;
//	setlocale (LC_ALL, "Rus");
//	puts("¬ведите символ, символ точки - выход('.'):");
//	puts("");
	character = getchar(); 		// считать введЄнный со стандартного потока ввода символ
	//do
			while (character != '.') 	// пока введенный символ не точка
			{
				putchar (sim(character)); 		// вывести этот символ
				character = getchar(); 		// считать введЄнный со стандартного потока ввода символ
			} 

		return 0;
	}
