#include<stdio.h>
void main(){
	//For Mutable Strings
	char name[5];
	printf("Enter you Name: ");
	scanf("%s",name);
	name[1] = 'f';
	printf("Your name is: %s\n",name);
	
	
	//Immutable Strings
//	char *name="Hello";
//	name[1] = 'f';
//	printf("Your name is: %s\n",name);
}
