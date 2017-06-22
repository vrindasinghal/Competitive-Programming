#include <iostream>

using namespace std;

int main()
{
    int b,v;
    long long int t,a;
    cin>>t;
    for(v=0;v<t;v++)
    {
        cin>>a>>b;
        if(b==0)
            cout<<"Airborne wins."<<'\n';
        else if(b==1)
            cout<<"Pagfloyd wins."<<'\n';
    }
}
