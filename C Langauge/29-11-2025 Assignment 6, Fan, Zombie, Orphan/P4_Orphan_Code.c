#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	pid_t childpid;
	childpid=fork();
	if(childpid==-1) {
		printf("fork error\n");
		return 1;
	}
	else if (childpid==0) {
		printf("Child : PID=%ld--PPID=%ld\n",(long)getpid(),(long)getppid());
		sleep(15);
		printf("Child : PID=%ld--PPID=%ld\n",(long)getpid(),(long)getppid());
	}
	else {
		printf("Parent: PID=%ld--PPID=%ld\n",(long)getpid(),(long)getppid());
		exit(0);
	}
}
