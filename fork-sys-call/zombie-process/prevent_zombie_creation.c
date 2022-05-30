// understanding zombie process
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t p;

	p = fork();
	if(p == 0) {
		printf("child id: %d\n", getpid());
	} else {
		printf("Parent id: %d\n", getpid());
		wait(NULL);	// this prevents the creation of zombie child
// because wait() informs the parent that child has finished,  so entry of child gets erased form process table
		sleep(20);
	}
	return 0;
}
