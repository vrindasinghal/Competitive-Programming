#include <iostream>

using namespace std;

int main()
{
    int T,v,a,b,i,c,d,r;
    cin>>T;
    for(v=0;v<T;v++)
    {
        cout<<'\n';
        cin>>a>>b;
        int c=0,d=0;
        for(i=0;i<a;i++)
            {
                cin>>r;
                if(r>c)
                    c=r;
            }
        for(i=0;i<b;i++)
            {
                cin>>r;
                if(r>d)
                    d=r;
            }
        if(c>=d)
            cout<<"Godzilla"<<'\n';
        else if(d>c)
            cout<<"MechaGodzilla"<<'\n';
    }
    return 0;
}
