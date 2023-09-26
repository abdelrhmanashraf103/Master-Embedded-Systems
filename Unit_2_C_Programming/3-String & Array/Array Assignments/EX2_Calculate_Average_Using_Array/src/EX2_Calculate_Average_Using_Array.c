/*
 ============================================================================
 Name        : EX2_Calculate_Average_Using_Array.c
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
    int n,i;
    float arr[50],sum=0.0;
    printf("Enter the numbers of data : ");
    scanf("%d",&n);
    while(n>=50 || n<0)
    {
    	printf("Enter a number in range of 0 to 50 ");
    	printf("Enter the numbers of data again : ");
    	scanf("%d",&n);
    }

    for(i=0;i<n;i++)
    {
        printf("%d.Enter number : ",i+1);
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("Average = %0.2f",(sum/n));
    return 0;
}
