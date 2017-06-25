#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long int n;
        cin>>n;
        unsigned long long int sum=0;
        for(int j=0;j<n;j++)
        {
            unsigned long long int a;
            cin>>a;
            sum=(sum%n+a%n)%n;
        }
        if(sum==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
