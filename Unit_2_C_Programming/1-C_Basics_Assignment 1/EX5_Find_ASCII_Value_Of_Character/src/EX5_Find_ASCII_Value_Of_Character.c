/*
 ============================================================================
 Name        : EX5_Find_ASCII_Value_Of_Character.c
 Author      : Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %i",x,x);
}
