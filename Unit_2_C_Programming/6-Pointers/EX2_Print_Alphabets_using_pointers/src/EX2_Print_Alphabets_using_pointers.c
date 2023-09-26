/*
 ============================================================================
 Name        : EX2_Print_Alphabets_using_pointers.c
 Author      :  Abdelrahman Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alpha[27];
	char* ptr=alpha;
	int i;
	for(i=0;i<26;++i)
	{
		*ptr='A'+i;
		ptr++;
	}

	ptr=alpha;
	for(i=0;i<26;i++)
	{
		printf("%c ",*ptr);//printf("%c ",alpha[i);
		ptr++;
	}

	return EXIT_SUCCESS;
}
