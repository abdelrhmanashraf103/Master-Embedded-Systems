/*
 ============================================================================
 Name        : EX8_Simple_Calculator.c
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
	float num1,num2;
	char operator;
	double result;
	printf("Enter The Operator either + or * or - or divide:");
	scanf("%c",&operator);
	printf("Enter Two operand :");
	scanf("%f%f",&num1,&num2);
	switch(operator)
	{
	case '+':
		result=num1+num2;
		printf("%0.2f + %0.2f = %0.2f",num1,num2,result);
		break;
	case '-':
		result=num1-num2;
		printf("%0.2f - %0.2f = %0.2f",num1,num2,result);
		break;
	case '*':
		result=num1*num2;
		printf("%0.2f * %0.2f = %0.2f",num1,num2,result);
		break;
	case '/':
		result=num1/num2;
		printf("%0.2f / %0.2f = %0.2f",num1,num2,result);
		break;
	default:
		printf("plz enter a valid num or operator!");
		break;

	}
}
