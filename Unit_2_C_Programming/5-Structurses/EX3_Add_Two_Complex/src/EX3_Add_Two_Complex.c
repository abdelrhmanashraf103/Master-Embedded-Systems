/*
 ============================================================================
 Name        : EX3_Add_Two_Complex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SNumber
{
	float R;
	float I;
};

struct SNumber Add_Complex(struct SNumber A,struct SNumber B)
{
	struct SNumber S;

	S.R =A.R + B.R;2.
	S.I =A.I +B.I;
	return S;
}
int main(void) {
	struct SNumber S1,S2,SUM;
	setbuf(stdout,NULL);
	printf("For 1st Complex num\n");
	printf("Enter real and Imaginary respectively :");
	scanf("%f %f",&S1.R,&S1.I);

	printf("For 2nd Complex num\n");
	printf("Enter real and Imaginary respectively :");
	scanf("%f %f",&S2.R,&S2.I);

	SUM=Add_Complex(S1,S2);
	printf("sum=%0.1f+i%0.1f",SUM.R,SUM.I);

	return EXIT_SUCCESS;
}
