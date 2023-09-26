/*
 ============================================================================
 Name        : EX4_Store_Info_Using_Structure.c
 Author      : Abdelrhamn Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[50];
	int roll;
	float marks;
};

int main(void) {
	setbuf(stdout,NULL);
	struct student arr[10];
	printf("Enter Information of student\n");
	int i;
	for(i=0;i<10;i++)
	{
		arr[i].roll=i+1;
		printf("For roll number %d\n",arr[i].roll);
		printf("Enter name :");
		scanf("%s",arr[i].name);
		printf("Enter marks :");
		scanf("%f",&arr[i].marks);

	}
	printf("Displaying Information of stuudents \n");

	for(i=0;i<10;i++)
		{
			arr[i].roll=i+1;
			printf("%d\n",arr[i].roll);
			printf("Name:");
			puts(arr[i].name);
			printf("marks %0.1f",arr[i].marks);

		}
	return EXIT_SUCCESS;
}

