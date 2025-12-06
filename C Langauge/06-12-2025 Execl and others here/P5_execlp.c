#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
void main(void) {
	int err;
	err=execlp("wc","wc","text2.txt",NULL,NULL);
	if(err==-1){
		perror("Execle Failed\n");
	}
}
