/*
 ============================================================================
 Name        : EX1_Prime_Num_Between_Intervala.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int check_prime(int num);
int main(void) {
	setbuf(stdout,NULL);
	int num1,num2,i,flag;
	printf("Enter two numbers (interval):");
	scanf("%d %d",&num1,&num2);
	printf("prime numbers between %d and %d are: ",num1,num2);
	for(i=num1+1;i<num2;i++)
	{
		flag=check_prime(i);
		if(flag==0)
		{
			printf("%d ",i);
		}
	}
	return EXIT_SUCCESS;
}

int check_prime(int num)
{
	int j,flag=0;
	for(j=2;j<=sqrt(num);j++)
	{
		if(num %j ==0)
		{
			flag=1;
			break;
		}
	}
	return flag;


}

