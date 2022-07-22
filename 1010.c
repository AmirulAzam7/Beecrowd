#include<stdio.h>

int main(){

   int code1,code2,units1,units2;
   double price1,price2,product1,product2,VALOR;
   scanf("%d %d %lf %d %d %lf",&code1,&units1,&price1,&code2,&units2,&price2);

   product1 = units1 * price1;
   product2 = units2 * price2;

   VALOR = product1 + product2;

   printf("VALOR A PAGAR: R$ %.2lf\n",VALOR);




return 0;
}
