#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        if(n==1)
            cout<<"2"<<endl;
        else
        {
            long long int x=(n*((3*n)+1)/2)%1000007;
            cout<<x<<endl;
        }
    }
}
