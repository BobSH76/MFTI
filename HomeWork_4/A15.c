/*
 * A15.c
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




/*

y = k*x+b

y1 = k*x1+b
y2 = k*x2+b

b = y2—k*x2
y1 = kx1+y2—kx2
k = (y1—y2)/(x1—x2)
*/

#include <stdio.h>

int main()
{
	int x1, y1, x2, y2;
	float k, b;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	k = (float)(y1-y2) / (float)(x1-x2);
	b = (float)y2 - k*(float)x2;
    printf("%.2f %.2f",k,b);
    return 0;
}
