#include<stdio.h>

int main(){

  int n,h;
  float s,SALARY;
  scanf("%d %d %f",&n,&h,&s);

  SALARY = h * s;

  printf("NUMBER = %d\n",n);
  printf("SALARY = U$ %.2f\n",SALARY);

return 0;
}
