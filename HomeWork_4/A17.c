/*
 * A17.c
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
	int a;
    scanf ("%d", &a);
	
	if (a==1 || a==2 || a==12)
		printf ("%s", "winter");
	if (a==3 || a==4 || a==5)
		printf ("%s", "spring");
	if (a==6 || a==7 || a==8)
		printf ("%s", "summer");
	if (a==9 || a==10 || a==11)
		printf ("%s", "autumn");

	return 0;
}

