// duplicating file descriptor using dup(old_fd) command
// the new file descriptor will be system generated
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

	new_fd = dup(old_fd);
	printf("New File Descriptor: %d\n", new_fd);

	return 0;
}
