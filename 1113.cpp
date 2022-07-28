#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;

    while(1)
    {
        cin>>a>>b;

        if(a>b)
        {
            cout<<"Decrescente"<<endl;
        }
        else if(b>a)
        {
            cout<<"Crescente"<<endl;
        }
        else if(a==b)
        {
            break;
        }
    }




    return 0;
}
