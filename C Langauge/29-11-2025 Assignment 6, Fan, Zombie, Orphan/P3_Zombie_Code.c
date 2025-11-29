#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	pid_t childpid;
	childpid=fork();
	if(childpid==-1){
		printf("fork error\n");
		return 1; 
	}
	else if (childpid==0){
		printf(" I am child my process ID=%ld\n",(long)getpid());
		exit(0);
	}
	else {
		printf("I am parent My PID=%ld\n",(long)getpid());
		sleep(20);
		//wait(NULL);
		exit(0);
	}
}
