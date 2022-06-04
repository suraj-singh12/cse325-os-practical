// read from a pipe i.e. recieve data from another process
// (our program will recieve data from ls)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	FILE *fd; 	// file descriptor
	char buffer[100];
	sprintf(buffer, "Interprocess Communication");
	//printf("%s", buffer);

	// popen() is used for performing ipc (opens a particular process, with a mode : r,w)
	// popen() must be closed pclose() fn
	fd = popen("ls", "r");  // open ls to read 

	fread(buffer, 1, 50, fd);	// read data char by char (50 chars only) from fd into buffer
	// what to write, size of single data elem, no of elem, where to write
	printf("%s\n", buffer);		// print the buffer

	pclose(fd);
}

