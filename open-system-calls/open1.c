// open system call (read from an external file)
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd;
	char data[100];
	fd = open("test.txt", O_RDONLY);

	int num;
	printf("Enter the number of bytes to read: ");
	scanf("%d", &num);

	// below read() will read 'num' number of chars/bytes from file 'test.txt' into data (buffer)
	int n = read(fd, data, num);
	write(1,data, n);
	printf("\n");
	return 0;
}
