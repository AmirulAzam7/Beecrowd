#include<stdio.h>

int main(){
   char ch;
  double salary,sale,TOTAL;


  scanf("%s %lf %lf",&ch,&salary,&sale);

  TOTAL = salary + (sale*15)/100;
  printf("TOTAL = R$ %.2lf\n",TOTAL);


return 0;
}
