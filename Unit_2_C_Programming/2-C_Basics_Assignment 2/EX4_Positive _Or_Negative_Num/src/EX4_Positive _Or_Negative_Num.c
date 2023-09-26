/*
 ============================================================================
 Name        : EX4_Positive.c
 Author      : Abdelrahmna Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	float num;
	printf("Enter a Numeber:");
	scanf("%f",&num);
	if(num>0)
	{
		printf("%0.2f is Positive\n",num);
	}
	else if(num<0)
	{
		printf("%0.2f is Negative\n",num);
	}
	else
	{
		printf("You entered Zero");
	}

}
