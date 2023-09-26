/*
 ============================================================================
 Name        : EX2_Find_Lenght_OF_String.c
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
	char str[20];
	int i=0,counter=0;
	printf("Enter a string :");
	gets(str);

	while(str[i]!='\0')
	{
		counter++;
		i++;
	}
	printf("Length of string is :%d ",counter);
	return EXIT_SUCCESS;
}
