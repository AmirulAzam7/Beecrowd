#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x;
    cin>>n;

    while(n>0)
    {
        cin>>x;
        int flag=0;

        for(i=2; i<x; i++)
        {
            if(x%i==0)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            cout<<x<<" eh primo"<<endl;
        }
        else
        {
            cout<<x<<" nao eh primo"<<endl;
        }


        n--;
    }





    return 0;
}
