// creating duplicate of file descriptor using dup2(old_fd, new_fd) command
// this will give the new file descriptor as the value we passed
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

	new_fd = dup2(old_fd, 10);
	printf("New File Descriptor: %d\n", new_fd);

	return 0;
}
 