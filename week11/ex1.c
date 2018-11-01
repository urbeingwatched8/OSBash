#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	const char *thisisnice = "This is a  nice day";	
	int dir = open("./ex1.txt", O_RDWR | O_CREAT | O_TRUNC, (mode_t)0600);
	size_t size = strlen(thisisnice) + 1; 
	lseek(dir, size-1, SEEK_SET) ;
	write(dir, "", 1);
	char *map = mmap(0, size, PROT_READ | PROT_WRITE, MAP_SHARED, dir, 0);
	for (size_t i = 0; i < size; i++){
		map[i] = thisisnice[i];
	}
	
	msync(map, size, MS_SYNC) ;
	munmap(map, size);
	close(dir);
	
	return 0;
}
