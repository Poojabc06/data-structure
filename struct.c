#include <stdio.h>
struct book{
int num;
char name[20];
float price;
};
int main()
{
  struct book hp;
  hp.num=1;
  hp.price=100.00;
  strcpy(hp.name,"Harry Potter");
  printf("Book number: %d\n",hp.num);
  printf("booK name: %s\n",hp.name);
  printf("Book price: %f\n",hp.price);
}
