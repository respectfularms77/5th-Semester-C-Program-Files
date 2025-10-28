#include<stdio.h>
#include<string.h>
void main(){
	char name[10];
	strcpy(name,"Arpit");
	strncpy(name,"Arpit Kumar",7);
	printf("%s\n",name);
//	strcat(name, "Hello There");
	strncat(name, "Hello There", 2);
	printf("%s\n",name);
}
