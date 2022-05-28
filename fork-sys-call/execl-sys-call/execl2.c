
#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("Before execl\n");
	execl("/bin/ls", "ps", "-gph", NULL);
	printf("After execl\n");
}

