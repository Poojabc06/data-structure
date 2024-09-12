#include<stdio.h>
int rem(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
int sum(int a,int b);
int main(){
  int num1,num2,result1,result2,result3,result4,result5;
  printf("Enter two numbers: ");
  scanf("%d%d",&num1,&num2);
  result1=rem(num1,num2);
  result2=sub(num1,num2);
  result3=mult(num1,num2);
  result4=div(num1,num2);
  result5=sum(num1,num2);
  
  printf("remainder=%d\n",result1);
  printf("subtraction=%d\n",result2);
  printf("multiplication=%d\n",result3);
  printf("division=%d\n",result4);
  printf("sum=%d\n",result5);
}
int rem(int a,int b)
{
  return a%b;}
int sub(int a,int b){
   return a-b;
  }int mult(int a,int b){
   return a*b;
  }int div(int a,int b){
   return a/b;
  }int sum(int a,int b){
   return a+b;
  }

 
  
