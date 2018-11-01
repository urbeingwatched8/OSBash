#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv){
	
	int copy_from = open("ex1.txt", O_RDONLY);
    size_t size = lseek(copy_from, 0, SEEK_END);
	int copy_to = open("ex1.memcpy.txt", O_RDWR | O_CREAT , (mode_t)0666);
    char* cfrom = mmap(NULL, size, PROT_READ, MAP_PRIVATE, copy_from, 0);
	

    ftruncate(copy_to, size);

    char* cto = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, copy_to, 0);
	memcpy(cto, cfrom, size);
   	munmap(cfrom, size);
    	munmap(cto, size);
   	close(copy_from);
    	close(copy_to);
}
