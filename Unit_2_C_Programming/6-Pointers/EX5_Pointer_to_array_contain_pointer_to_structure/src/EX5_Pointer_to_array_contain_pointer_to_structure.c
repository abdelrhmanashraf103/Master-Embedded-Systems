/*
 ============================================================================
 Name        : EX5_Pointer_to_array_contain_pointer_to_structure.c
 Author      : Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
	char *name;
	int ID;
};
int main(void) {
	struct Employee emp1={"john",1001},emp2={"Alex",1002},emp3={"rose",1003};
	struct Employee (*arr[])={&emp1,&emp2,&emp3};
	struct Employee (*(*ptr)[3])=&arr;


	printf("Employee name :%s\n",(**(*ptr+1)).name);
	printf("Employee ID :%d",(*(*ptr+1))->ID);
	return EXIT_SUCCESS;
}
