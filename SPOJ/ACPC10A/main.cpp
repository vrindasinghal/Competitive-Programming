#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a!=0 && b!=0)
    {
        if(b-a==c-b)
        {
            cout<<"AP "<<c+b-a<<endl;
        }
        else if(a!=0 && b==0 && c==0)
        {
            cout<<"GP 0"<<endl;
        }
        else
        {
            cout<<"GP "<<c*(b/a)<<endl;
        }
        cin>>a>>b>>c;
    }
}
