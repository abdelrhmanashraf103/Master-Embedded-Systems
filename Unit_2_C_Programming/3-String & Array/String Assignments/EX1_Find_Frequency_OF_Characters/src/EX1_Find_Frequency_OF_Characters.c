/*
 ============================================================================
 Name        : EX1_Find_Frequency_OF_Characters.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	    char arr[50],ch;
	    int i,counter=0;
	    printf("Enter the string plz :");
	    gets(arr);
	    printf("Enter the cjaracter plz :");
	    scanf("%c",&ch);
	    for(i=0;arr[i]!='\0';i++)
	    {
	        if(ch==arr[i])
	        {
	            counter++;
	        }
	    }
	    printf("the num of charater %c repeated is : %d ",ch,counter);
	return EXIT_SUCCESS;
}
