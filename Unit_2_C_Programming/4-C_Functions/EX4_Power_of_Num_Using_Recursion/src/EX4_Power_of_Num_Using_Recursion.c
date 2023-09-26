/*
 ============================================================================
 Name        : EX4_Power_of_Num_Using_Recursion.c
 Author      : Abedlrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    setbuf(stdout,NULL);
    int base,pow_num;
    printf("Enter base Number : ");
    scanf("%d",&base);
    printf("Enter power Number (positive integer) : ");
    scanf("%d",&pow_num);
    printf("%d ^ %d = %d",base,pow_num,power_Of_Num(base,pow_num));
    return 0;
}
int power_Of_Num(int base , int pow_num)
{
    while(pow_num!=0)
    {
        return base*power_Of_Num(base,pow_num-1);
    }
    return 1;
}
