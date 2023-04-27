//Nicolas Rumiche
//CDA 3103C
//Bonus Programming Assignment

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main(){

	//Creates file pointer and opens the traces file for read mode. Catches exception that file isn't found.
	char str[20];
	FILE* ptr = fopen("/home/nickyrumiche/traces.tx", "r");

	if(fgets(str, 20, ptr) != NULL){

		sscanf(str, )
	}
	
	//int twoway[][];




}
