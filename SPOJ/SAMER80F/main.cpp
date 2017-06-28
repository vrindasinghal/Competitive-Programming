#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int x=n*(n+1)*(2*n+1)/6;
        cout<<x<<'\n';
        cin>>n;
    }
}
