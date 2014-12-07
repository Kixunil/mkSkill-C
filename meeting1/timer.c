#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
	if(argc < 2) {
		fprintf(stderr, "Too few arguments. Usage: %s TIME\n", argv[0]);
		return 1;
	}

	int seconds;
	if(sscanf(argv[1], "%d", &seconds) < 1) {
		fprintf(stderr, "TIME have to be a number!\n");
		return 1;
	}

	if(seconds < 0) {
		fprintf(stderr, "TIME have to be greater than zero!\n");
		return 1;
	}

	while(seconds > 0) {
		printf("%d         \r", seconds);
		fflush(stdout);
		sleep(1);
		--seconds;
	}

	printf("Hotovo\n");

	return 0;
}
