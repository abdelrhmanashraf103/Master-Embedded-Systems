/*
 ============================================================================
 Name        : EX1_Handle_Pointers_In_Progeam.c
 Author      : Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m=29;
	int* ab;

	printf("Pointer : How to handle the pointers in the program !\n");
	printf("******************************************************\n");
	printf("Address of m : %p\n",&m);
	printf("The value of m : %d\n\n\n",m);

	ab=&m;
	printf("Now ab is assigned with the address of m .\n");
	printf("Address of pointer ab : %p\n",&ab);
	printf("content of pointer :%d\n\n\n",*ab);

	m=34;

	printf("The value of m assigned to 34 now .\n");
	printf("Address of pointer ab :%p\n",ab);
	printf("content of pointer :%d\n\n\n",*ab);

	*ab=7;

	printf("The pointer variable ab is assigned the value 7 now.\n");
	printf("Address of m : %p\n",&m);
	printf("The value of m : %d\n",m);

	return EXIT_SUCCESS;
}
