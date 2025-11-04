#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
	if (fork() || fork()){
		int a = fork();
		printf("The process ID %d\n",a);
		printf("The Process ID here is(inside IF): %u\t",getpid());
	}
	printf("The Process ID here is: %d\t",getpid());
	printf("1\n");
}
