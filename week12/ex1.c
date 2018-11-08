#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char string[20];
    int rand_file = open("/dev/random", O_RDONLY);
    read(rand_file, string, 20);
    close(rand_file);
    FILE *out_file = fopen("ex1.txt", "w+");
    fprintf(out_file, "%s", string);
    fclose(out_file);
}
