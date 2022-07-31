#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c,flag=0;
    cin>>n;

    int a = 0,b = 1;

       for(i=1; i<=n; i++)
    {
        if(flag<=1)
   {
       c = flag;
   }
   else
   {
       c = a + b;
        a = b;
        b = c;
   }
        cout<<c;
        if(i==n)
        {
            cout<<endl;
        }
        else
        {
            cout<<" ";
        }
        flag++;
    }


    return 0;
}
