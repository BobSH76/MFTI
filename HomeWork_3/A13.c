/*
 * A13.c
 * 
 * Copyright 2025 Юзеры <Юзеры@ICEDRAGON>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(void)
{
	
	int a=123, mul;
	int b1=1, b2=1, b3=1;
//	setlocale (LC_ALL, "Rus");
//	printf ("Введите три аргумента через пробел: ");

	scanf ("%d", &a);
	
	b1 = a%10;
	b2 = (a/10)%10;
	b3 = (a/100)%10;
	mul = b1 * b2 * b3;
	
	printf ("%d\n",mul);

	return 0;
} 
