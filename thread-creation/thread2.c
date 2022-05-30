// get return value from thread
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
// function that thread will do
void  *thread_function(void *arg);
int i, j;		// globally defined
/* compile using
 * gcc thread1.c -o thread1 -lpthread
 * (so the pthread header is linked with the program)
*/
int main()
{
	char *m = "5";  // only string args we can send (a pointer)
	void *result;

	pthread_t a_thread;
	pthread_create(&a_thread, NULL, thread_function, m);  // passing m arg

	pthread_join(a_thread, &result); // result var will store the return status of a_thread
	// run the thread, and pause the main() untill thread finishes its execution
	// thread exection finished, now resume main()
	printf("Inside Main\n");
	for(int j = 20; j < 25; ++j) {
		printf("%d\n", j);
		sleep(1);
	}
	printf("Thread Returned: %s", (char*)result);
	return 0;
}

void *thread_function(void *arg) {
	int sum = 0;
	int n = atoi(arg);

	printf("Inside thread\n");
	for(i = 0; i < n; ++i) {
		printf("%d\n", i);
		sleep(1);
	}
	pthread_exit("Done\n");  // this is what thread has returned, and join will receive
}
