/*
 ============================================================================
 Name        : EX2_Factorial_Of_Num.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int main(void) {
	setbuf(stdout,NULL);
	int num;
	printf("Enter an positive number :");
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,factorial(num));
	return EXIT_SUCCESS;
}

int factorial(int num)
{
	int result;
	if(num==0 || num==1)
	{
		result=1;
	}
	else
	{
		result = num*factorial(num-1);
	}
	return result;

}
