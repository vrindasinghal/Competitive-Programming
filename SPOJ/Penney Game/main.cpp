#include <iostream>

using namespace std;

int main()
{
    int t,i,v,n;
    cin>>t;
    char a[41];
    for(v=0;v<t;v++)
    {
        cin>>n;
        for(i=0;i<40;i++)
        {
            cin>>a[i];
        }
        int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0;
        for(i=0;i<39;i++)
        {
            if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='T')
                count1++;
            else if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='H')
                count2++;
            else if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='T')
                count3++;
            else if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='H')
                count4++;
            else if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='H')
                count6++;
            else if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='T')
                count5++;
            else if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='T')
                count7++;
            else if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='H')
                count8++;
        }
        cout<<n<<' '<<count1<<' '<<count2<<' '<<count3<<' '<<count4<<' '<<count5<<' '<<count6<<' '<<count7<<' '<<count8<<'\n';
    }
}
