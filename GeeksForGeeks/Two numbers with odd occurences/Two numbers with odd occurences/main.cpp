#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int fo=a[0],x=0,y=0;
        for(int i=1;i<n;i++)
            fo^=a[i];
        int set_bit=fo & ~(fo-1);
        for(int i=0;i<n;i++)
        {
            if(set_bit & a[i])
                x^=a[i];
            else
                y^=a[i];
        }
        if(y>x)
            cout<<y<<" "<<x<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
}
