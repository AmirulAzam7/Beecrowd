#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,c,d;
    cin>>a>>b;

    if(a==b)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(a>b)
    {
        c = (24-a)+b;
        cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
    }
    else if(b>a)
    {
        d = b-a;
        cout<<"O JOGO DUROU "<<d<<" HORA(S)"<<endl;
    }




    return 0;
}
