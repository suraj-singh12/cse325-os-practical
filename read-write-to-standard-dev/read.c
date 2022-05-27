#include <stdio.h>
#include <unistd.h>
int main()
{
	int n;
	printf("Enter the no of chars to read (<=20): ");
	scanf("%d", &n);
	char buf[20] = {'\0'};

	read(0, buf, 10);	// read 10 chars from standard i/o dev and store in buf
	write(1, buf, n);     // write the same data on standard i/o dev
	printf("\n");
	// printf("\nThe data read from standard input device is: %s\n", buf);
	return 0;
}
