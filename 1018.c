#include<stdio.h>

int main()
{

  int a,t;
  scanf("%d",&a);

  printf("%d\n",a);
  printf("%d nota(s) de R$ 100,00\n",a/100);
  t = a%100;
  printf("%d nota(s) de R$ 50,00\n",t/50);
  t = t%50;
  printf("%d nota(s) de R$ 20,00\n",t/20);
   t = t%20;
  printf("%d nota(s) de R$ 10,00\n",t/10);
   t = t%10;
  printf("%d nota(s) de R$ 5,00\n",t/5);
   t = t%5;
  printf("%d nota(s) de R$ 2,00\n",t/2);
   t = t%2;
  printf("%d nota(s) de R$ 1,00\n",t/1);





    return 0;
}
