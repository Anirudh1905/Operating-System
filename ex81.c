#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main(int argc,char *argv[])
{
  int len,mid,i=1;
  struct buffer
  {
    long mtype;
    char buf[50];
  }x;
  mid=msgget((key_t)6,IPC_CREAT|0666);
  x.mtype=atoi(argv[1]);
  strcpy(x.buf,argv[2]);
  len=strlen(x.buf);
  msgsnd(mid,&x,len,0);
  printf("Message of size %d sent successfully \n",len);
  return 0;
}
