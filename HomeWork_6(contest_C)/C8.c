/*
 * C8.c
 */


#include <stdio.h>
//#include <locale.h>

char sim(char character)
{
	if (character > 96)
	{
		character = character - 32; 		// ������� ���� ������
	}
		return character;
}

int main (void)
	{
	char character;
//	setlocale (LC_ALL, "Rus");
//	puts("������� ������, ������ ����� - �����('.'):");
//	puts("");
	character = getchar(); 		// ������� �������� �� ������������ ������ ����� ������
	//do
			while (character != '.') 	// ���� ��������� ������ �� �����
			{
				putchar (sim(character)); 		// ������� ���� ������
				character = getchar(); 		// ������� �������� �� ������������ ������ ����� ������
			} 

		return 0;
	}
