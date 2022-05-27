// read max 20 chars from user and print them on screen
#include <stdio.h>
#include <unistd.h>
int main()
{
	char buff[100] = {'\0'};
	int bytes = read(0, buff, 20);
	write(1, buff, bytes);
	printf("\n");
	return 0;
}
