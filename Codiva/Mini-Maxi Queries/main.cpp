#include <iostream>
#include <cstring>

using namespace std;

int mindist(int arr[],int n,int l,int r)
{
    int count=0;
    for(int i=l-1;i<=r-1;i++)
    {
        if(arr[i]==1)
            count++;
    }
    if(count<2)
        return -1;
    else
    {
        int a[count],x=0;
        for(int i=l-1;i<=r-1;i++)
        {
            if(arr[i]==1)
            {
                a[x]=i+1;
                x++;
            }
        }
        int mini=10000000;
        for(int i=0;i<count-1;i++)
        {
            if((a[i+1]-a[i])<mini)
                mini=a[i+1]-a[i];
        }
        return mini;
    }
}

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    memset(arr,0,sizeof arr);
    for(int i=0;i<q;i++)
    {
        int a,l,r,val;
        cin>>a;
        if(a==1)
        {
            cin>>l>>r>>val;
            if(val==1)
            {
                for(int j=l-1;j<=r-1;j++)
                {
                    if(arr[j]==1)
                        arr[j]=0;
                    else if(arr[j]==0)
                        arr[j]=1;
                }
            }
            cout<<"Array:"<<endl;
            for(int v=0;v<n;v++)
                cout<<arr[v]<<"  ";
            cout<<endl;
        }
        else if(a==2)
        {
            cin>>l>>r;
            int ans= mindist(arr,n,l,r);
            cout<<ans<<endl;
        }
        else
        {
            cin>>l>>r;
            int count=0;
            for(int i=l-1;i<=r-1;i++)
            {
                if(arr[i]==1)
                count++;
            }
            if(count<2)
                cout<<"-1"<<endl;
            else
            {
                int x=-1,y=-1;
                for(int j=l-1;j<r-1;j++)
                {
                    if(arr[j]==1)
                    {
                        x=j;
                        break;
                    }
                }
                for(int j=r-1;j>l-1;j--)
                {
                    if(arr[j]==1)
                    {
                        y=j;
                        break;
                    }
                }
                if(x!=-1 && y!=x)
                {
                    cout<<y-x<<endl;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
            }
        }
    }
}
