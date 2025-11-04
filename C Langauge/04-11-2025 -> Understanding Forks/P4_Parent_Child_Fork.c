#include<stdio.h>
#include<unistd.h>
void main(){
	fork();
	fork();
	printf("Process Id: Child -> %d & Parent: -> %d\n",getpid(), getppid());
}
