#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n,x=0,y=0;
        cin>>n;
        int a[n-1];
        for(int j=0;j<n-1;j++)
        {
            cin>>a[j];
            x^=a[j];
        }
        for(int j=1;j<=n;j++)
        {
            y^=j;
        }
        x=x^y;
        cout<<x<<endl;
    }
}
