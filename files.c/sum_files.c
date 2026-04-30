#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp1,*fp2;
  int num,sum=0;
  fp1=fopen("source.txt","r");
  if(fp1==NULL)
  {
    printf("input file not exists\n");
    exit(1);
  }
  while(fscanf(fp1,"%d\n",&num)!=EOF)
  {
    sum+=num;
  }
  fclose(fp1);
  fp2=fopen("destination1.txt","w");
  if(fp2==NULL)
  {
    printf("unable to create destination file\n");
    exit(1);
  }
  fprintf(fp2,"%d\n",sum);
  fclose(fp2);
  printf("sum successfully written to destination file.txt\n");
}