#include <iostream>

using namespace std;

int main()
{
    int T,a,b,v,i,j,temp,sum,q;
    cin>>T;
    for(v=0;v<T;v++)
    {
        cin>>a>>b;
        int r[b];
        for(i=0;i<b;i++)
        {
            cin>>r[i];
        }
        for(i=0;i<b;i++)
        {
            for(j=0;j<b-i;j++)
            {
                if(r[j]>r[j+1])
                {
                    temp=r[j];
                    r[j]=r[j+1];
                    r[j+1]=temp;
                }
            }
        }
        sum=0,q=1;
        for(i=b-1;i>=0;i++)
        {
            sum=sum+r[i];
            q++;
            if(sum>a)
                break;
        }
        if(sum>=a)
            cout<<"Scenario #"<<v+1<<":"<<'\n'<<q<<'\n';
        else if(sum<a)
            cout<<"Scenario #"<<v+1<<":"<<'\n'<<"impossible"<<'\n';
    }
    return 0;
}
