/*
 ============================================================================
 Name        : EX3_Add_Two_Integers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,sum;
	printf("Enter Two Integers :");
	fflush(stdin);fflush(stdout);
	scanf("%d\n%d",&num1,&num2);
	sum=num1+num2;
	printf("Sum = %d",sum);
}
