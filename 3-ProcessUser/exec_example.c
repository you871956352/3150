#include <stdio.h>	// required by printf()
#include <unistd.h>	// required by execl()

int main(void) {
	int i = 10;
	printf("before execl...\n");

//	execl("/bin/xxx", "/bin/ls", "-l", "-a", NULL);
  execl("/bin/ls", "-l", "-a", NULL);
//    execl("/bin/ls", "/bin/ls", "*.c", NULL);

	printf("after execl...(%d)\n", i);

	return 0;
}
