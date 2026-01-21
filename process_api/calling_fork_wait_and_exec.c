#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
  printf("hello (pid:%d)\n", (int) getpid());
  int rc = fork();
  if (rc < 0)
  {
    // the child process was never created
    fprintf(stderr, "fork failed\n");
    exit(1);
  }
  else if (rc == 0)
  {
    // dealing with the child process
    printf("child (pid:%d)\n", (int) getpid());
    char *myargs[3];
    myargs[0] = strdup("wc"); // the word counting program
    myargs[1] = strdup("calling_fork_wait_and_exec.c");
    myargs[2] = NULL;
    execvp(myargs[0], myargs); // runs word count on myargs[0] on the source file on myargs[1]
  }
  else
  {
    // parent process section
    int rc_wait = wait(NULL);
    printf("parent of %d (rc_wait:%d) (pid:%d)", rc, rc_wait, (int) getpid());
  }
  return (0);

}
