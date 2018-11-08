#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 512

int main(int argc, char *argv[]) {
	int file1;
	int file;
	int append;
	ssize_t rd;
	char buf[BUFFER_SIZE + 1];
	if (argc>1) {
		file = O_WRONLY | O_CREAT | O_TRUNC;
		while((append = getopt(argc, argv, "a")) != -1) 
			if (append == 'a') file = O_WRONLY | O_APPEND | O_CREAT;
		file1 = open(argv[argc-1], file, 0644);
	}

	while ((rd = read(STDIN_FILENO, buf, BUFFER_SIZE)) != 0) {
		write(STDOUT_FILENO, buf, rd);
		if (argc > 1) {
			write(file1, buf, rd);
		}
	}
}
