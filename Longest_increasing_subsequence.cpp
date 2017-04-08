#include <iostream>

using namespace std;

int lis(int arr[],int n)
{
    int i,j,max=0;
    int lis[n];
    for(i=0;i<n;i++)
        lis[i]=1;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i] < lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
            max=lis[i];
    }
    return max;
}

/*int main()
{
    int T,n;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cout<<lis(arr, n)<<endl;
    }
    return 0;
}
*/

int main()
{
    int T,n;
    cout<<"Enter no. of test cases."<<endl;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter size of array."<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter values of array."<<endl;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cout<<"Longest increasing sub-sequence is:"<<lis(arr, n)<<endl;
    }
    return 0;
}
