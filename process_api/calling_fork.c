#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
  else if
  {
    if (rc == 0)
    {
      // going to create a new child process
      printf("child (pid:%d)\n", (int) getpid());
    }
  }
  else
  {
    printf("parent of %d (pid:%d)", rc, (int) getpid());
  }
  return (0);
}
