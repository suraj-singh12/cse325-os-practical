// read from one file and write to another using opensystem file
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int n, fd1, fd2;
	char data[100] = {'\0'};
	fd1 = open("test.txt", O_RDONLY);
	// n = no of bytes read from file 'test.txt'
	n = read(fd1, data,10);	// read 10 chars from 'test.txt' into data(buffer)

	// create file and set permissions, open in readonly and get fd
	fd2 = open("towrite.txt", O_WRONLY|O_CREAT, 00642);

	// write the buffer data into 'towrite.txt' file
	write(fd2, data, n);
}
