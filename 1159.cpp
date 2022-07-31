#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=1,sum=0;
    while(1)
    {
        cin>>n;
        count = 1;
        sum = 0;

        if(n==0)
        {
            break;
        }
        else
        {
            for(i=n; count<=5; i++)
            {
                if(i%2==0)
                {
                    sum = sum + i;
                    count++;
                }
            }
        }
        cout<<sum<<endl;
    }





    return 0;
}
