#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i;
    cin>>n;

    cout<<"2"<<endl;
    for(i=1; i<10000; i++)
    {
        if(i%n==0)
        {
             cout<<i+2<<endl;
        }

    }




    return 0;
}
