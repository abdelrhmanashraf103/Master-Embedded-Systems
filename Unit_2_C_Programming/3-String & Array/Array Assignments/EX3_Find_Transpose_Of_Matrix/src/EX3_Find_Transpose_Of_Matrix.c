/*
 ============================================================================
 Name        : EX3_Find_Transpose_Of_Matrix.c
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
	    int N_row ,N_column;
	    int a[10][10];
	    int trans[10][10];
	    int i,j;
	    printf("Enter Rows and Columns of Matrix:");
	    scanf("%d%d",&N_row,&N_column);
	    printf("Enter elemnts of matrix:\n");

	    for(i=0;i<N_row;i++)
	    {
	        for(j=0;j<N_column;j++)
	        {
	            printf("Enter element a%d%d: ",i+1,j+1);
	            scanf("%d",&a[i][j]);
	        }
	    }
	    printf("Entered Matrix\n");
	    for(i=0;i<N_row;i++)
	    {
	        for(j=0;j<N_column;j++)
	        {
	            printf("%d\t",a[i][j]);
	            if(j==N_column-1)
	            {
	                printf("\n");
	            }
	        }
	    }

	    for(i=0;i<N_row;i++)
	    {
	        for(j=0;j<N_column;j++)
	        {
	            trans[j][i]=a[i][j];
	        }
	    }
	    printf("Transpose of Matrix :\n");
	    for(i=0;i<N_column;i++)
	    {
	        for(j=0;j<N_row;j++)
	        {
	            printf("%d\t",trans[i][j]);
	            if(j==N_row-1)
	            {
	                printf("\n");
	            }
	        }
	    }
	return EXIT_SUCCESS;
}
