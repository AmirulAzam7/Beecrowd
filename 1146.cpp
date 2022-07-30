#include<iostream>
using namespace std;

int main()
{
    int n,i;
    
    while(1)
    {
      cin>>n;
       
     if(n==0)
    {
      break;
    
    }
    else
    {
      for(i=1; i<=n; i++)
    {
      cout<<i;
    if(i<n)
    {
      cout<<" ";
    
    }
    }
    
    }
    cout<<endl;
    
    }
    
    return 0;
}		
