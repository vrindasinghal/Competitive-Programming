#include <iostream>

using namespace std;

int main()
{
    int T,n,i,j,v,temp,sum;
    cin>>T;
    for(v=0;v<T;v++)
    {
        sum=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                if(b[j]>b[j+1])
                {
                    temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i]*b[i];
        }
        cout<<sum<<'\n';
    }
    return 0;
}
