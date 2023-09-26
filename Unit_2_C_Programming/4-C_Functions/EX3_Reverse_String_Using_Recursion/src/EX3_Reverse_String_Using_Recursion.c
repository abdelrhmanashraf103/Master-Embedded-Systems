/*
 ============================================================================
 Name        : EX3_Reverse_String_Using_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Reverse();
int main(void) {
	setbuf(stdout,NULL);
	printf("Enter a sentence :");
	Reverse();
	return EXIT_SUCCESS;
}
void Reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		Reverse();
		printf("%c",c);
	}
}

