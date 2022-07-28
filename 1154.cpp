#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  double count=0,sum=0;
  
  cout<<fixed<<setprecision(2);

  while(1)
  {
      cin>>n;

      if(n<0)
      {
          break;
      }
      else
      {
          sum = sum + n;
          count++;
      }
  }
    double average = sum/count;
    cout<<average<<endl;




    return 0;
}
