/*
 ============================================================================
 Name        : EX6_Swap_Two_Numbers.c
 Author      : Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	float a ,b,temp;
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);

	temp=a;
	a=b;
	b=temp;
	//printing the values after swapping
	printf("\nAfter swapping, value of a = %0.2f",a);
	printf("\nAfter swapping, value of b = %0.2f",b);



}
