#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main() {
	pid_t pid, ppid;
	pid = getpid();
	ppid = getppid();
	printf("My pid = %d\nMy ppid = %d\n", pid, ppid);
	return 0;
}

