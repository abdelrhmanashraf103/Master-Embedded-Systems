/*
 ============================================================================
 Name        : EX5_Find_Area_of_Circle.c
 Author      : Abdelrhamn Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415
#define area(r) (PI*r*r)
int main(void) {
	setbuf(stdout,NULL);
	int radius;
	float area;
	printf("Enter the raduis :");
	scanf("%d",&radius);
	area=area(radius);
	printf("Area=%0.2f",area);
	return EXIT_SUCCESS;
}
