/*
 ============================================================================
 Name        : EX1_Multidimensional_Array_in_C.c
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
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d:",i+1,j+1);
			scanf("%f",&a[i][j]);
		}

	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			{
				printf("Enter a%d%d:",i+1,j+1);
				scanf("%f",&b[i][j]);
			}
	for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
			}
	printf("Sum of Matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			{
				printf("%0.1f\t",sum[i][j]);
                if(j==1)
                {
                    printf("\n");
                }
			}

	}


	return EXIT_SUCCESS;
}
