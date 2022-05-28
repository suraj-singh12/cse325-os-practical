// understanding execl() system call
// this replaces one process image with another process in place
// completely replace 
#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("Before execl\n");
	execl("/bin/ps", "ps", "-a", NULL);
	printf("After execl\n");
}

