#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
	int p = fork();
	if (p > 0){
		fork();
		printf("The Process ID here is(inside IF): %d\t",getpid());
		printf("Hello\n");
	}
	printf("The Process ID here is: %d\t",getpid());
	printf("Hi\n");
}
