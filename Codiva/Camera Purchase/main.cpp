#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[],int arr2[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swap(&arr2[i], &arr2[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swap(&arr2[i + 1], &arr2[high]);
    return (i + 1);
}

void quickSort(int arr[],int arr2[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr,arr2, low, high);
        quickSort(arr,arr2, low, pi - 1);
        quickSort(arr,arr2, pi + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int brands[n];
    for(int i = 0; i < n; i++)
    {
       cin >> brands[i];
    }
    int prices[n];
    for(int i = 0;i < n; i++)
    {
       cin >> prices[i];
    }
    quickSort(prices,brands,0,n-1);
    int q;
    cin >> q;
    for(int i=0;i< q;i++)
    {
        int d;
        cin >> d;
        int cameras[5];
        for(int j = 0; j< d; j++)
        {
           cin >> cameras[j];
        }
        for(int j=d;j<5;j++)
        {
            cameras[j]=-1;
        }
        int k;
        cin >> k;
        int count=0,vri=0;
        for(int j=0;j<n;j++)
        {
            if(brands[j]==cameras[4] ||brands[j]==cameras[3] ||brands[j]==cameras[2] ||brands[j]==cameras[1] ||brands[j]==cameras[0] )
            {
                count++;
            }
            if(count==k)
            {
                vri=-1;
                cout<<prices[j];
                break;
            }
        }
        if(vri==0)
            cout<<"-1";
        cout<<endl;
    }
}
