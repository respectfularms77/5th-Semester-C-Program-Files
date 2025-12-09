#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
void main() {
	int fd[2];
	int a,b,c,d;
	char buffer[100];
	
	if(pipe(fd) == -1) {
		perror("Pipe \n");
		return;
	}
	
	pid_t pid = fork();
	if(pid==0) {
		//Child is Reading the Content	

		close(fd[1]);														//Closing the Parent's end
		read(fd[0], &c, sizeof(buffer));
		read(fd[0], &d, sizeof(buffer));
		
		int x,y;
		if (read(fd[0], &x, sizeof(int)) != sizeof(int)) {
            perror("read x");
            exit(1);
        }
        if (read(fd[0], &y, sizeof(int)) != sizeof(int)) {
            perror("read y");
            exit(1);
        }
		
		// printf("Your child has received the Content: %s\n", buffer);
		int sum = x+y;
		printf("%d\n", sum);
		close(fd[0]);
	}
	
	else {
		//Parent is Writing the Content
	
		close(fd[0]);														//Closing the Child's end
		printf("Enter 2 Numbers: ");
		scanf("%d %d",&a, &b);
		write(fd[1], &a, sizeof(int));
		write(fd[1], &b, sizeof(int));
		close(fd[1]);
	}
}
