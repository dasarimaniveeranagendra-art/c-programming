#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char filename[100];
  char line[256];
  char choice;
  printf("enter the name of the file to write:");
  scanf("%s",filename);
  fp=fopen(filename,"w");
  if(fp==NULL)
  {
    printf("eror openin file\n");
    return 1;
  }
  getchar();
  do{
    printf("enter a line to write to file:");
    fgets(line,sizeof(line),stdin);
    fprintf(fp,"%s",line);
    printf("do you want to add another line? (y/n):");
    choice=getchar();
    getchar();  
  }
  while(choice=='y' || choice=='Y');
  fclose(fp);
  printf("data successfully written to %s\n",filename);
}