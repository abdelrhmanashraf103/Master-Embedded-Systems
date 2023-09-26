/*
 ============================================================================
 Name        : EX1_Storing_Information.c
 Author      : Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sstudents
{
	char name[50];
	int roll;
	double marks;
};
int main(void) {

	setbuf(stdout,NULL);

	struct Sstudents student;
	//taking all information
	printf("Enter Information of student\n");
	printf("Enter name :");
	scanf("%s",&student.name);

	printf("Enter roll number :");
	scanf("%d",&student.roll);

	printf("Enter marks :");
	scanf("%lf",&student.marks);

	//Displaying all Information

	printf("name : %s\n",student.name);
	printf("roll : %d\n",student.roll);
	printf("marks : %0.2lf\n",student.marks);
	return EXIT_SUCCESS;
}
