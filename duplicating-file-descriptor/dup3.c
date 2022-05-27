// the new fd created is a copy of the old fd, and changes made to/by any are
// reflected in both.
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	int old_fd, new_fd;
	char buff[50];
	old_fd = open("test.txt", O_RDWR);

	// printf("Old File Descriptor: %d\n", old_fd);

	// read using the old file descriptor
	read(old_fd, buff, 5);
	// write the buffer to screen
	write(1, buff, 5);

	new_fd = dup(old_fd); // or dup(old_fd, 14); // or any value instead of 14
	printf("\n");

	read(new_fd, buff, 5);
	write(1, buff, 5);
	printf("\n");
	//printf("New File Descriptor: %d\n", new_fd);

	read(old_fd, buff, 5);
	write(1,buff, 5);
	printf("\n");
	return 0;
}
