#include<stdio.h>
void main(){
	char name[20];
	printf("Enter you Name: ");
	fgets(name, 10, stdin);
	printf("Your name is: %s\n",name);
	printf("Your name is: %s\n",name);
	gets(name);
	gets(name);
	
	
	//gets automatically prints and brings the cursor to the next line
}
