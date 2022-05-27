// print the count of chras read by read() system call
#include <stdio.h>
#include <unistd.h>
int main()
{
	char buff[10] = {'\0'};
	int bytes = read(0, buff, 7);
	printf("Read %d bytes\n", bytes);
}
