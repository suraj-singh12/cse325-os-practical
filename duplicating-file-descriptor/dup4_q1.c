
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	int old_fd, new_fd;
	old_fd = open("test.txt", O_RDWR);
	printf("Old File Descriptor: %d\n", old_fd);

	new_fd = dup2(old_fd,1);
	printf("New File Descriptor: %d\n", new_fd);
	return 0;
}

/* 
  NOTE: since the fd 1 is connected to standard output device,
  getting new_fd as 1, we connect the fd 1 to our file.
  so printf write all the output in the file not on terminal.
*/