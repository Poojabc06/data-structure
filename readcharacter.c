#include<stdio.h>
int main(){
  FILE *fp;
  char c;
  fp=fopen("thanupoooja.txt","r");
  c=fgetc(fp);
  printf("character is %c",c);
  fclose(fp);
  return 0;
}