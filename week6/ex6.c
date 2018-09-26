#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>

int main(void)
{
        int     pipesss[2];
        pid_t   childpid;
	childpid=fork();
	int buffer;
	int signal;
        int childpid2=300;
        pipe(pipesss);
        if(childpid!=0)
        {	
		childpid2 = fork;
	}
	if( childpid==0)
	{
		close (pipesss[1]);
		read (pipesss[0], &buffer, 100);
                close(pipesss[0]);
		printf("Number found - %d\n", buffer);
		sleep(3);
		kill(buffer, SIGSTOP);
        }
        else if (childpid2!=0)
        {
		close (pipesss[0]);
		write(pipesss[1],&childpid2, 100);
		close(pipesss[1]);
		int wait = waitpid (childpid2, &signal, WUNTRACED);
		printf ("got signal - %d\n", signal);
		sleep(3);
                kill (childpid2, SIGKILL);

	}
        else{
	for (int i=0; i<5;i++){
		printf ("this is active");
}
	}
return(0);
}

