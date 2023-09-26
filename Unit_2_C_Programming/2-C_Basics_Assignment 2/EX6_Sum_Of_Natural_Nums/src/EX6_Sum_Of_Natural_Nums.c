/*
 ============================================================================
 Name        : EX6_Sum_Of_Natural_Nums.c
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
	int num,counter,sum=0;
	printf("Enter The Num plz :");
	scanf("%d",&num);
	for(counter=0;counter<=num;counter++)
	{
		sum+=counter;
	}
	printf("Sum = %d",sum);

}
