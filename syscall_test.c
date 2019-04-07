#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>

int main (int argc, char** argv) {
	int call;
	call = syscall(333, NULL);
	if(call<0){
		printf("%s\n", "failed");
		exit(1);
	}
	printf("%s\n", "success");
	return 0;
}
