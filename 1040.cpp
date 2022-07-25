# Beecrow#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double a,b,c,d,average;
    cin>>a>>b>>c>>d;
    
    cout<<fixed<<setprecision(1);

    average = ((a*2)+(b*3)+(c*4)+(d*1))/10;

    cout<<"Media: "<<average<<endl;

    if(average>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(average<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(average>=5.0 && average<6.9)
    {
        cout<<"Aluno em exame."<<endl;
        double x;
        cin>>x;
        cout<<"Nota do exame: "<<x<<endl;

        double average2 = (average + x)/2;

        if(average2>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(average2<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<average2<<endl;

    }


    return 0;
}
