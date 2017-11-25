#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 int maxDifference(int m, int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for ( int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for ( int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    int x=0,y=0;
    for (int p=m; p<n; p++)
    {
        if (prime[p])
        {
            x=p;
            break;
        }
    }
    for (int p=n; p>m; p--)
    {
        if (prime[p])
        {
            y=p;
            break;
        }
    }
    return y-x;
}

int main()
{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int startVal;
        int endVal;
        cin >> startVal >> endVal;
        int result = maxDifference(startVal, endVal);
        cout << result << endl;
    }
}
