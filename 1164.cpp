#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,x,sum=0;
    cin>>n;

    while(n>0)
    {
        cin>>x;
        sum=0;

        for(i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum = sum + i;
            }
        }
        if(sum==x)
        {
            cout<<x<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<x<<" nao eh perfeito"<<endl;
        }
        n--;
    }



    return 0;
}
