#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;

    int big = 0,pos=0;
    for(i=1; i<=100; i++)
    {
        cin>>n;

        if(n>big)
        {
            big = n;
            pos = i;
        }
    }
    cout<<big<<endl<<pos<<endl;



    return 0;
}
