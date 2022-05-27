// normally / without using lseek
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
	fd = open("seeking.txt", O_RDONLY);

	n = read(fd, buff, num);
	write(1, buff, n);
	printf("\n");
	n = read(fd, buff, num);
	write(1, buff, n);
	printf("\n");
	return 0;
}
