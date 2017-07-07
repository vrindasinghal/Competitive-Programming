#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=-1){
       int a[t],sum=0,ans=0;
       for(int i=0;i<t;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
       if(sum%t==0)
       {
           sum=sum/t;
           for(int j=0;j<t;j++)
           {
               if(a[j]>sum)
               {
                   ans=ans+a[j]-sum;
               }
           }
           cout<<ans<<endl;
       }
       else
       {
           cout<<"-1"<<endl;
       }
       cin>>t;
    }
}
