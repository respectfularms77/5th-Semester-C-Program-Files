#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
void main() {
	int fd[2];
	char buffer[100];
	
	if(pipe(fd) == -1) {
		perror("Pipe \n");
		return;
	}
	
	pid_t pid = fork();
	if(pid==0) {
		//Child is Reading the Content	

		close(fd[1]);														//Closing the Parent's end
		int n = read(fd[0], buffer, sizeof(buffer));
		// printf("Your child has received the Content: %s\n", buffer);
		write(1, buffer, n);
		close(fd[0]);
	}
	
	else {
		//Parent is Writing the Content
	
		close(fd[0]);														//Closing the Child's end
		char msg[] = "Hello There This Side A. K. Mohanty\n";
		write(fd[1], msg, sizeof(msg));
		close(fd[1]);
	}
}
