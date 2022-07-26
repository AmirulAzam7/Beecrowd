#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,v,tax;
    cin>>n;
    cout<<fixed<<setprecision(2);

  if(n>2000)
  {
          if(n>=3000 && n<=4500)
          {
              v = n-3000;
              tax = (18*v)/100;
              tax = ((8*1000)/100)+ tax;
              cout<<"R$ "<<tax<<endl;
          }
          else if(n>4500)
          {
              v = n - 4500;
              tax = (28*v)/100;
              tax = ((8*1000)/100) + ((18*1500)/100) + tax;
              cout<<"R$ "<<tax<<endl;
          }
      else  if(n<3000)
      {
          n = n - 2000;
          tax = (8*n)/100;
          cout<<"R$ "<<tax<<endl;
      }
  }
  else
  {
      cout<<"Isento"<<endl;
  }




    return 0;
}
