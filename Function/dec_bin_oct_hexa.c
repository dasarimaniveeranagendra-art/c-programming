#include<stdio.h>
int main()
{
  int num,opt;
  printf("enter the decimal:");
  scanf("%d",&num);
  printf("1.binary\n2.octal\n3.hexadec\n");
  printf("enter ur option:");
  scanf("%d",&opt);
  switch (opt)
  {
  case 1:
  printf("binary equivalent:");
  func(num,2);
  break;
  case 2:
  printf("octal  equivalent:");
  func(num,8);
  break;
  case 3:
  printf("hexa decimal equivalent:");
  func(num,16);
  break;
  }
  printf("\n");
}
func(int num,int b)
{
  int i=0,j,rem;
  char arr[20];
  while(num>0)
  {
    rem=num%b;
    num/=b;
    if(rem>9 && rem<16)
    {
      arr[i++]=rem-10+'A';
    }
    else
    {
      arr[i++]=rem+'0';
    }
  }
  for(j=i-1;j>=0;j--)
  {
    printf("%c",arr[j]);
  }  
}