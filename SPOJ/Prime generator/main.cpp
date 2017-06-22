#include <iostream>

using namespace std;

int main()
{
    int T,a,b,i,v,count;
    cin>>T;
    for(v=0;v<T;v++)
    {
        cin>>a>>b;
        while(a<=b)
        {
            count=0;
            for(i=2;i<=a/2;i++)
            {
                if(a%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
                cout<<a<<'\n';
            ++a;
        }
        cout<<'\n';
    }
}
