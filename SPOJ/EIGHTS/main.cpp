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
        cout<<(10*(19+25*(n-1))+2)<<endl;
    }
}
