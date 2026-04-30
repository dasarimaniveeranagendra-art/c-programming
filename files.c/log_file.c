#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
int copy(int i,char dum[],char str[])
{
  int j=0;
  for( i;str[i]!='\n';i++)
  {
    dum[j++]=str[i];
  }
  dum[j]='\0';
  return 0;
}
int main()
{
  int fd,i,j,ret,count;
  char dum[1024],str[1024];
  fd=open("./log.txt",O_RDONLY);
  if(fd<0)
  {
    printf("%s\n",strerror(errno));
    exit(1);
  }
  while((ret=read(fd,str,sizeof(str)))>0)
  {
    str[ret]='\0';
    sleep(1);
    for(i=0;i<ret;i++)
    {
      if((strncmp(str+i,"error:",5)==0)||(strncmp(str+i,"warning:",8)==0))
      {
        copy(i,dum,str);
        count=1;
      }
      if(count)
      {
        printf("%s\n",dum);
        count=0;
      }
    }
  }
  close(fd);
}