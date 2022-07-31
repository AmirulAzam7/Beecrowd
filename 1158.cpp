#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,j,count=1,sum=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a>>b;
         sum = 0;
        count = 1;

        for(j=a; count<=b; j++)
        {
            if(j%2!=0)
            {
                sum = sum +j;
                count++;
            }
        }
        cout<<sum<<endl;

    }




    return 0;
}

