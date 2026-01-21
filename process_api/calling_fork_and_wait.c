#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - entry for the program
 * @argc: argument count
 * @argv: array to store all the arguments
 */


int main(int argc, char *argv[])
{
  printf("hello (pid:%d)\n", (int) getpid());
  int rc = fork();
  if (rc < 0)
  {
    // means the fork failed
    fprintf(stderr, "fork failed\n");
    exit(1);
  }
  else if (rc == 0) // the return value of 0 is returned to the child...on successfull creation of the child 
  { 
      // going to create a new child process
    printf("child (pid:%d)\n", (int) getpid());
  }
  else // the process id of the child is returned to the parent
  {
    int rc_wait = wait(NULL);
    printf("parent of %d (rc_wait:%d) (pid:%d)", rc, rc_wait, (int) getpid());
  }
  return (0);
}

