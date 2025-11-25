#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc, char *argv[]){
	pid_t childpid = 0;
	int i,n;
	if(argc < 2){
		printf("Enter the Valid Number of Arguments");
		return 1;
	}
	n = atoi(argv[1]);
	for(i=1; i <n;i++){
		if(childpid=fork()){
			break;
		}
	}
	printf("i:%d process ID:%ld parent ID:% ld child ID:%ld\n", i, (long)getpid(), (long) getppid(), (long)childpid);
}
