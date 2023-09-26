/*
 ============================================================================
 Name        : EX7_Factorial.c
 Author      :  Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int number);
int main(void) {
	setbuf(stdout,NULL);
	int num;
	unsigned long long fact_result;
	printf("Enter an integer :");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Error !!! Factorial of Negative Number does not exist");
	}
	else
	{
		fact_result=factorial(num);
		printf("Factorial = %llu",fact_result);

	}
}

unsigned long long factorial(int number)
{
	unsigned long long return_value;
	if(number<=1)
	{
		return_value=1;
	}
	else
	{
		return_value = (factorial(number-1))*number;
	}
	return return_value;

}
