#include<stdio.h>

int main()
{

  int s,hour,minutes;
  scanf("%d",&s);

  hour = s/3600;
  s = s%3600;
  minutes = s/60;
  s = s%60;

  printf("%d:%d:%d\n",hour,minutes,s);




    return 0;
}
