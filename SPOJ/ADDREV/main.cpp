#include <iostream>

using namespace std;

int rev(int n)
{
 int r=0;
 for(; n>=1; n=n/10)
   r = r*10 + n%10;
 return r;
}


int main()
{
    int t,a,b;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>a>>b;
        if(a%10==0)
    {
         while(a%10==0)
             a/=10;
    }
    if(b%10==0)
    {
         while(b%10==0)
             b/=10;
    }
    a=rev(a);
    b=rev(b);
    a=a+b;
    if(a%10==0)
    {
         while(a%10==0)
             a/=10;
    }
    a=rev(a);
    cout<<a<<endl;
    }
}
