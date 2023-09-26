/*
 ============================================================================
 Name        : EX1_Even_OR_Odd.c
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

	int num;
	printf("Enter an integer you want to check:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}


}
