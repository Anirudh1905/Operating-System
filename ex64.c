#include <stdio.h>
#include <unistd.h>
int main()
{
  char *args[]={"head","-2","f1",NULL};
  printf("Transfer to execlp function\n");
  execvp("head",args);
  printf("This line will not execute\n");
  return 0;
}
