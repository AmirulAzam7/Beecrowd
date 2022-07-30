#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,j,x=1;
   cin>>n;

   for(i=1; i<=n; i++)
   {
       x=1;
       for(j=1; j<=3; j++)
       {
           x = x*i;
           cout<<x;
           if(j<3)
           {
               cout<<" ";
           }
       }
       cout<<endl;
   }




    return 0;
}
