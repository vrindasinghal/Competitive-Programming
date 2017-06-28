#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x-y==0 || x-y==2)
        {
            if(x%2==0)
            {
                cout<<x+y<<'\n';
            }
            else
                cout<<x+y-1<<'\n';
        }
        else
            cout<<"No Number"<<'\n';
    }
}
