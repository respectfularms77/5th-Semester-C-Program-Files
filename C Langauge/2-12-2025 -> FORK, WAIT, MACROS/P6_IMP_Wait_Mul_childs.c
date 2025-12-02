#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main(void) {
	pid_t firstCh, secondCh;
	pid_t returnR;
	int sum;
	firstCh=fork();
	if (firstCh > 0)		secondCh = fork();
	
	//My Code
	/*
	if(firstCh>0 && secondCh>0) {
		printf("Parent Section: \t");
		returnR= wait(NULL);
		printf("After the child process termination wait return value=%ld\n", (long)returnR);
	}*/
	
	if(firstCh>0 && secondCh>0) {
		printf("Parent Section: \t");
		
		returnR= wait(NULL);
		printf("After the child process termination wait return value=%ld\n", (long)returnR);
		returnR= wait(NULL);
		printf("After the child process termination wait return value=%ld\n", (long)returnR);
	}
		
	if(firstCh==0){
		sleep(5);
		printf("The 1st child process id=%ld\n", (long) getpid());
		sum=20+30;
		printf("sum=%d\n",sum);
		printf("1st Child Completes\n");
		sum=0;
	}
	if(secondCh == 0){
		sleep(2);
		printf("\nThe 2nd child process id=%ld\n", (long) getpid());
		sum=100+100;
		printf("Sum=%d\n",sum);
		printf("2nd Child Completes\n");
		sum=0;
	}
	return 0;
}
