#include <stdio.h>
#include <unistd.h>
int main()
{
	int bytes = write(3, "Hello All\nHow are you?\n", 10);
	printf("The value returned by write(): %d\n", bytes);
	return 0;
}
