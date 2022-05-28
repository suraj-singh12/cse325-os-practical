//understanding the system() call
// it runs the desired process when call made, and current program continues then
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Before system()\n");
	system("ps");
	printf("After system()\n");
}


