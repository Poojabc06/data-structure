#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("thanupoooja.txt","r");
  fgets(c,6,fp);
  printf("character is %s",c);
  fclose(fp);
  return 0;
}