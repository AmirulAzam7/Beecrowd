#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2);
    if(a==1)
    {
        cout<<"Total: R$"<<" "<<b*4.00<<endl;
    }
    else if(a==2)
    {
        cout<<"Total: R$"<<" "<<b*4.50<<endl;
    }
    else if(a==3)
    {
        cout<<"Total: R$"<<" "<<b*5.00<<endl;
    }
    else if(a==4)
    {
        cout<<"Total: R$"<<" "<<b*2.00<<endl;
    }
    else if(a==5)
    {
        cout<<"Total: R$"<<" "<<b*1.50<<endl;
    }




    return 0;
}
