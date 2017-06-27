#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        double x;
        x=n/3.14159/2*n;
        cout<<fixed<<setprecision(2)<<x<<'\n';
        cin>>n;
    }
}
