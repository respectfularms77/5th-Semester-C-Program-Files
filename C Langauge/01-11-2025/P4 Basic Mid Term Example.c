#include<stdlib.h>
#include<stdio.h>
void main(){
	int *ptr;
	ptr = (int *) realloc(NULL, sizeof(int));
	*ptr=100;
	printf("%d\n",*ptr);
}
