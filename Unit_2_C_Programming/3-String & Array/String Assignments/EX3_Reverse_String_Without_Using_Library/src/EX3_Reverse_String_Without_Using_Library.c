/*
 ============================================================================
 Name        : EX3_Reverse_String_Without_Using_Library.c
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
	    char str[50];
	    char reverse_str[50];
	    int i=0,j;
	    printf("Enter the string : ");
	    gets(str);
	    for(j=strlen(str);j>0;j--)
	    {
	        reverse_str[i]=str[j-1];
	        i++;

	    }
	    reverse_str[i]='\0';
	    printf("Reverse string is :%s",reverse_str);
	return EXIT_SUCCESS;
}
