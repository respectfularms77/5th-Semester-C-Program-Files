#include<stdio.h>
void main(){
	char name1[10] = "Hello";
	char name2[10] = "Hello";
	if(name1 == name2){
		printf("Addresses are equal");
	}
	else{
		printf("Since It compares Address therfore not equals\n");
	}

}
