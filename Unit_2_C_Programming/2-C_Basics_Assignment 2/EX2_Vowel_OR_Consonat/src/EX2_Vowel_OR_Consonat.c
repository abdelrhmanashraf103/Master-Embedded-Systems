/*
 ============================================================================
 Name        : EX2_Vowel_OR_Consonat.c
 Author      : Abdelrahmn Ashraf
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
	printf("Enter an alphabet:");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c is a Vowel",ch);
		break;
	default:
		printf("%c is a consonant",ch);
		break;
	}
}
