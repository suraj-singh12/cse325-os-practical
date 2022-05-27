// write a program to print 10 chars starting from 10th character from a file "seeking"
// use of lseek command
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	int n, fd;
	char buff[50]  = {'\0'};
	fd = open("seeking.txt", O_RDWR);

	// move 9 chars ahead of current 
	lseek(fd, 9, SEEK_CUR);

	n = read(fd, buff, 10);
	write(1, buff, n);

	printf("\n");
	return 0;
}
