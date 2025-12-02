#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void goodbye(){
	printf("Good from Exit\n");
}
void main(){
	atexit(goodbye);
	printf("Causing Segmentation Fault\n");
	int *p = NULL;
	*p = 10;
}
