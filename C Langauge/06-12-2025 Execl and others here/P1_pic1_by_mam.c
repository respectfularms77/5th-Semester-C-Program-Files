#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(int argc, char *argv[]){
	printf("PID of p1.c = %d\n", getpid());
	char *args[] = {"Hello", "Neso", "Academy", NULL};
	execv("./p2", args);
	printf("Back to p1.c\n");
}
