/*
 ============================================================================
 Name        : EX4_Print_elements_in.c
 Author      : Abdelrhman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int arr[15];
	int* ptr =arr;
	int n,i,j;
	printf("Input the number of elements to store in the array max(15): ");
	scanf("%d",&n);
	printf("Input %d numbers of elements in array \n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i+1);
		scanf("%d",ptr+i);
	}
	printf("\n\n");

	for(j=n-1;j>=0;j--)
	{
		printf("element-%d:%d\n",j,*(ptr+j));

	}

	return EXIT_SUCCESS;
}
