/*
 ============================================================================
 Name        : EX5_Search_Element_In_Array.c
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
	    int a[30],i,num,element;
	    printf("Enter num of the elemnts :");
	    scanf("%d",&num);

	    printf("Enter the Values of elements :");
	    for(i=0;i<num;i++)
	    {
	        scanf("%d",&a[i]);
	    }

	    printf("Enter the element to be searched : ");
	    scanf("%d",&element);

	    i=0;

	    while(i<num && element!=a[i])
	    {
	        i++;
	    }

	    if(i<num)
	    {
	        printf("the element to be search is found at the location = %d ",i+1);
	    }
	    else
	    {
	        printf("the element to be search is not found ");
	    }
	return EXIT_SUCCESS;
}
