#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void goodbye(){
	printf("Goodbye from Exit - 1\n");
}
void display(){
	printf("Hello from Display - 2\n");
}
void main(){
	atexit(goodbye);
	atexit(display);		//Always calls the 2nd Exit handler 1st
	printf("This is an Example of atexit handler\n");
}
