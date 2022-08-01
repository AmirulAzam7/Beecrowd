#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,i,total=0,tc=0,tr=0,ts=0;
    char ch;
    cin>>t;

    cout<<fixed<<setprecision(2);
    for(i=1; i<=t; i++)
    {
        cin>>a>>ch;

        total = total + a;

        if(ch=='C')
        {
            tc = tc + a;
        }
        if(ch=='R')
        {
            tr = tr + a;
        }
        if(ch=='S')
        {
            ts = ts + a;
        }

    }
    double pc = (tc*100)/(double)total;
    double pr = (tr*100)/(double)total;
    double ps =  (ts*100)/(double)total;

     cout<<"Total: "<<total<<" cobaias"<<endl;
     cout<<"Total de coelhos: "<<tc<<endl;
     cout<<"Total de ratos: "<<tr<<endl;
     cout<<"Total de sapos: "<<ts<<endl;
     cout<<"Percentual de coelhos: "<<pc<<" %"<<endl;
     cout<<"Percentual de ratos: "<<pr<<" %"<<endl;
     cout<<"Percentual de sapos: "<<ps<<" %"<<endl;


    return 0;
}
