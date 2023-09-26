/*
 ============================================================================
 Name        : EX3_Laregst_Num_among_Three_Nums.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 // this project could be implement by using if, else statement

int main(void) {
	float num1,num2,num3;
	printf("Enter the three numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);

	switch(((num1>num2)&&(num1>num3))+2*((num2>num1)&&(num2>num3))+3*((num3>num1)&&(num3>num2))+4*((num1==num2)&&(num1>num3))+5*((num1==num3)&&(num1>num2))+6*((num2==num3)&&(num2>num1)))
	{
	// this case is printed if the first num is the largest
	case 1:
		printf("largest Num is %f\n",num1);
		break;
	// this case is printed if the second num is the largest
	case 2:
		printf("largest Num is %f\n",num2);
		break;
	// this case is printed if the third num is the largest
	case 3:
		printf("largest Num is %f\n",num3);
		break;
		// this case is printed if the first and second num are the largest and larger than the third num
	case 4:
		printf("first and second num are equal and larger than the third number\n");
		break;
	// this case is printed if the first and third num are the largest and larger than the second num

	case 5:
		printf("first and third num are equal and larger than the second number\n");
		break;
	// this case is printed if the second and third num are the largest and larger than the first num

	case 6:
		printf("second and third num are equal and larger than the first number\n");
		break;
	// this case is printed if the first,second and third num are equal

	default:
		printf("All nums are equal");
		break;
	}
}
