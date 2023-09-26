/*
 ============================================================================
 Name        : EX3_Multiply_Two_Float.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,product;
	printf("Enter Two Numbers :");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	product = num1 * num2;
	printf("Product = %f",product);
}
