#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double a,b,c,x;
    cin>>a>>b>>c;

    if(a<b)
    {
        x = a;
        a = b;
        b = x;
    }
    if(a<c)
    {
        x = a;
        a = c;
        c = x;
    }
    if(b<c)
    {
        x = b;
        b = c;
        c = x;
    }

    if(a>=(b+c))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if((a*a)==(b*b)+(c*c))
       {
           cout<<"TRIANGULO RETANGULO"<<endl;
       }
       else if((a*a)>(b*b)+(c*c))
          {
              cout<<"TRIANGULO OBTUSANGULO"<<endl;
          }
          else if((a*a)<(b*b)+(c*c))
             {
                 cout<<"TRIANGULO ACUTANGULO"<<endl;
             }
             if(a==b && b==c && a==c)
                {
                    cout<<"TRIANGULO EQUILATERO"<<endl;
                }
                if(a==b && b!=c)
                {
                    cout<<"TRIANGULO ISOSCELES"<<endl;
                }
                else if(b==c && a!=b)
                {
                    cout<<"TRIANGULO ISOSCELES"<<endl;
                }
                else if(a==c && a!=b)
                {
                     cout<<"TRIANGULO ISOSCELES"<<endl;
                }




    return 0;
}
