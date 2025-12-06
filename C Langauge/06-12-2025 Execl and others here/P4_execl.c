#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
void main(void) {
	int err;
	err=execl("/bin/wc","wc","text1.txt",NULL,NULL);
	// err=execl("/bin/wc","wc", "-l", "mytext.txt",NULL,NULL);
	// err=execl("/bin/wc","wc","mytext.txt",NULL,NULL);
	if(err==-1){
		perror("Execle Failed\n");
	}
}
