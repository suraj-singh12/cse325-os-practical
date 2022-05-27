// use of lseek command
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	int n, fd;
	int num;
	printf("Enter the number of characters to read: ");
	scanf("%d", &num);

	char buff[50]  = {'\0'};
	fd = open("seeking.txt", O_RDWR);

	n = read(fd, buff, num);
	write(1, buff, n);
	printf("\n");
	// move 5 chars ahead of current 
	lseek(fd, 5, SEEK_CUR);

	n = read(fd, buff, num);
	write(1, buff, n);
	printf("\n");
	return 0;
}
