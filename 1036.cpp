#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    float a,b,c,R1,R2;
    cin>>a>>b>>c;

    if(a==0 || (b*b-(4*a*c)<0))
       {
           cout<<"Impossivel calcular\n";
       }
       else
        {
            R1 = (-b + sqrt(b*b-(4*a*c)))/(2*a);
             R2 = (-b - sqrt(b*b-(4*a*c)))/(2*a);

             cout<<fixed<<setprecision(5);
             cout<<"R1 = "<<R1<<endl;
             cout<<"R2 = "<<R2<<endl;

        }



    return 0;
}
