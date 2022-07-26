#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int i,n,e=0,o=0,p=0,N=0;
   for(i=0; i<5; i++)
   {
       cin>>n;

       if(n%2==0)
       {
           e++;
       }
       if(n%2!=0)
       {
           o++;
       }
       if(n>0)
       {
           p++;
       }
       if(n<0)
       {
           N++;
       }
   }
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<N<<" valor(es) negativo(s)"<<endl;


 return 0;
}
