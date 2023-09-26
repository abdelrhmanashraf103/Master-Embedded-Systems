/*
 ============================================================================
 Name        : EX2_Printing_Integer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("you entered:%d",num);
}
