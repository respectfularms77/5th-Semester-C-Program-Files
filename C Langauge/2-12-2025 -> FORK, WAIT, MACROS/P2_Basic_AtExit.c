#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void goodbye(){
	printf("Good from Exit\n");
}
void main(){
	atexit(goodbye);
	while(1){
		printf("Hello There");
	}
}
