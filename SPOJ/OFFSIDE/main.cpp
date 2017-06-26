#include <iostream>

using namespace std;

int main()
{
    long long int A,D;
    cin>>A>>D;
    while(A!=0 || D!=0)
    {
        long long int min1=1000000007,min21=1000000006,min22=1000000007;
        for(int i=0;i<A;i++)
        {
            long long int n;
            cin>>n;
            if(n<min1)
                min1=n;
        }
        for(int i=0;i<D;i++)
        {
            long long int n;
            cin>>n;
            if(n<min21 && min21<=min22)
            {
                min22=min21;
                min21=n;
            }
            else if(n>=min21 && min22>n)
            {
                min22=n;
            }
        }
        if(min1>=min22 && min1>=min21)
        {
            cout<<"N"<<endl;
        }
        else
            cout<<"Y"<<endl;
        cin>>A>>D;
    }
}
