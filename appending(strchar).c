#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("thanupoooja.txt","a");
  fputc('a',fp);
  fputs("thanu",fp);
  fclose(fp);
  return 0;
}