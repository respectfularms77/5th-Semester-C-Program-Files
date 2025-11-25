#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void main(){
	if(fork() == 0){
		printf("I am Child process with ID: %ld \n", (long)getpid());
	}
	else {
		sleep(5);
		wait(NULL);
	}
}
