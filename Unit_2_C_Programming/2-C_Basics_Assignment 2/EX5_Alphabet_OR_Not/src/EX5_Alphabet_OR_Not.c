/*
 ============================================================================
 Name        : EX5_Alphabet_OR_Not.c
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
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a'...'z':
	case 'A'...'Z':
		printf("%c is an alphabet",ch);
		break;
	default:
		printf("%c is an not an alphabet",ch);
		break;
	}


}
