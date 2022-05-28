// understanding fork() system call
// parent id is > 0, child id is = 0, and if child process creation failed, id is = -1
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	pid_t p;
	printf("Before fork\n");

	p = fork();
	if(p == 0) {
		printf("I am a child having id: %d\n", getpid());
		printf("My parent's id is: %d\n", getppid());
	} else {
		printf("My child's id is: %d\n",p);
		printf("I am parent and my id is: %d\n", getpid());
	}
	printf("\n");
	return 0;
}
 
