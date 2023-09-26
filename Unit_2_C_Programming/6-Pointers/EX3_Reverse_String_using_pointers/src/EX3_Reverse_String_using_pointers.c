/*
 ============================================================================
 Name        : EX3_Reverse_String_using_pointers.c
 Author      : Abdelrhman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	setbuf(stdout,NULL);
	char str[100];
	char* ptr;
	int i;
	int length;
	printf("Enter the string:\n");
	gets(str);
	length=strlen(str);
	ptr=str;

	for(i=length-1;i>=0 ;i--)
	{

		printf("%c",*(ptr+i));
	}
	printf("\n");
	return 0;

}


