#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n==1)
        cout<<"TAK";
    else
    {
        if(n%2==0)
            {
                while(n>=1 && n%2==0)
                {
                    n=n/2;
                }
                if(n==1)
                    cout<<"TAK";
                else
                    cout<<"NIE";
            }
        else
            cout<<"NIE";
    }
}
