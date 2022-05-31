// passing multiple args to thread
#include <stdio.h>
#include <pthread.h>

struct multi_arg {
	int arg1;
	int arg2;
};

// function that thread will execute
void  *multiple(void *a) {
	struct multi_arg *args = a;
	printf("%d\n", args->arg1);
	printf("%d\n", args->arg2);
	pthread_exit(NULL);	// not returning anything
}

/* compile using
 * gcc thread1.c -o thread1 -lpthread
 * (so the pthread header is linked with the program)
*/
int main()
{
	pthread_t th;
	struct multi_arg ag;
	ag.arg1 = 10;
	ag.arg2 = 20;

	pthread_create(&th, NULL, multiple, &ag);
	pthread_join(th,NULL); // return nothing, as thread is not returning anything

}
