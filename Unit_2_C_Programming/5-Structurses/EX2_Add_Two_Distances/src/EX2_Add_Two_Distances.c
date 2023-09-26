/*
 ============================================================================
 Name        : EX2_Add_Two_Distances.c
 Author      : Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SDistance
{
	int feet;
	float inch;
}d1,d2,sum;
int main(void) {
	setbuf(stdout,NULL);
	printf("Enter Information for 1st distance \n");
	printf("Enter Feet :");
	scanf("%d",&d1.feet);

	printf("Enter inch :");
	scanf("%f",&d1.inch);

	printf("Enter Information for 2nd distance \n");
	printf("Enter Feet :");
	scanf("%d",&d2.feet);

	printf("Enter inch :");
	scanf("%f",&d2.inch);

	sum.feet =d1.feet + d2.feet;
	sum.inch = d1.inch +d2.inch;

	//if inch is greater than 12 ,changing it to feet
	if(sum.inch >12.0)
	{
		sum.inch-=12;
		sum.feet++;
	}
	printf("Sum of distance =%d\'-%0.1f\"",sum.feet,sum.inch);
	return EXIT_SUCCESS;
}
