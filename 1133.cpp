#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i;

    cin>>a>>b;

   if(b>a)
   {
         for(i=a+1; i<b; i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout<<i<<endl;
        }
    }
   }
   else if(a>b)
   {
         for(i=b+1; i<a; i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout<<i<<endl;
        }
    }
   }




    return 0;
}
