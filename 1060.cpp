#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double n,i,count=0;

    for(i=0; i<6; i++)
    {
        cin>>n;

        if(n>0)
        {
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;



    return 0;
}
