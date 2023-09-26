/*
 ============================================================================
 Name        : EX4_Insert_Element_In_Array.c
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
	    int arr[20],N_elements,i,element,location;
	    printf("Enter numbers of elements : ");
	    scanf("%d",&N_elements);

	    for(i=0;i<N_elements;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    printf("Enter the element to be inserted :");
	    scanf("%d",&element);
	    Location:
	    printf("Enter the Location :");
	    scanf("%d",&location);

	    /*creating a space to store the inserted element*/
	    if(location <= N_elements)
	    {
	        for(i=N_elements;i>=location;i--)
	        {

	            arr[i]=arr[i-1];

	        }
	        N_elements++;
	        arr[location-1]=element;
	    }
	    else
	    {
	        printf("You are out of elements range !");
	        printf("Enter the Location again :");
	        goto Location;
	    }
	    for(i=0;i<N_elements;i++)
	    {
	        printf("%d ",arr[i]);
	    }



	return EXIT_SUCCESS;
}
