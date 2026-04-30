/*#include<stdio.h>
int main()
{
  unsigned int x=0x12345678;
  char *c=(char*)&x;
  printf("number:0x%x\n",x);
  if(*c==0x12)
  {
    printf("system is little endian\n");
  }
  else{
    printf("system is big endian\n");
  }
}*/


#include<stdio.h>
int main()
{
  unsigned int num=0x12345678;
  unsigned char *ptr=(unsigned char*)&num;
  printf("memory representation:\n");
  for(int i=0;i<sizeof(num);i++)
  {
    printf("byte %d:0x%X\n",i,ptr[i]);
  }
  if(ptr[0]==0x12)
  {
    printf("system is big endian\n");
  }
  else if(ptr[0]==0x78)
  {
    printf("system is little endian\n");
  }
  else{
    printf("unknown endianness\n");
  }
}