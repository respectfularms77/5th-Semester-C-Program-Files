#include<stdio.h>
#include<string.h>
void main(){
	char n1[10] = "Apple";
	char n2[10] = "Applet";
	int res = strcmp(n1,n2);
	if(res==0)
		printf("Both the Strings have the Same length\n");
	else if(res==1)
		printf("1st String have the more length\n");
	else
		printf("2nd String have the more length\n");
}
