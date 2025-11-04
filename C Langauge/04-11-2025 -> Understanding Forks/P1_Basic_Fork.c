#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
	fork();
	fork();
	printf("The Process ID here is: %d\t",getpid());
	printf("Hello\n");
}
