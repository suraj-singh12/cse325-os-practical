// understanding zombie process
#include <stdio.h>
#include <unistd.h>
int main()
{
	pid_t p;

	p = fork();
	if(p == 0) {
		printf("child id: %d\n", getpid());
	} else {
		printf("Parent id: %d\n", getpid());
		sleep(20);
	}
	return 0;
}
