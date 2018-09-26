#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
        int     pipesss[2];
        pid_t   childpid;
        char    buffer[20];
        pipe(pipesss);
        if(fork() == 0)
        {	
                close (pipesss[1]);
		read (pipesss[0], &buffer, 20);
                close(pipesss[0]);
		printf("Child received number:%s\n", buffer);
        }
        else
        {
                char* txt = "Message from parent:";
                close(pipesss[0]);
		write(pipesss[1],txt,20);
                close(pipesss[1]);

	}
        return(0);
}
