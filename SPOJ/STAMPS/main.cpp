#include <iostream>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int stamps,friends;
        cin>>stamps>>friends;
        int a[friends];
        for(int j=0;j<friends;j++)
        {
            cin>>a[j];
        }
        qsort(a,friends,sizeof(int),compare);
        int sum=0,count=0;
        for(int j=friends-1;j>=0;j--)
        {
            if(sum<stamps)
            {
                sum=sum+a[j];
                count++;
            }
            else
                break;
        }
        if(sum>=stamps)
            cout<<"Scenario #"<<i+1<<":"<<endl<<count<<endl<<endl;
        else
            cout<<"Scenario #"<<i+1<<":"<<endl<<"impossible"<<endl<<endl;
    }
}
