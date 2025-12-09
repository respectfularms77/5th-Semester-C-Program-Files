#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
void main() {
	int fd;
	char write_buf[] = "Hello Unix File I/O using System Calls - Signing OFF BY A.K.Mohanty\n";
	char read_buf[100];
	
	fd = open("example.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    	if (fd < 0) {
        	perror("open");
	        return;
	}
        write(fd, write_buf, sizeof(write_buf));
    	close(fd);  
    	// close after writing

	// ---------- Read the file ----------
    	fd = open("example.txt", O_RDONLY);
	if (fd < 0) {
        	perror("open");
	        return;
	}
	int n = read(fd, read_buf, sizeof(read_buf));		//number of lines read 
	if (n < 0) {
        	perror("read");
	        return;
	    }

	// write to STDOUT (fd 1)
	write(1, read_buf, n);				       //Writing the contents on the Screen using only the lines of code it has read
	close(fd);
}
