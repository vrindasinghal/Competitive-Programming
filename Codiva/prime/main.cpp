#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
     int i,sq;
     if(n==1)
       return false;
	 if(n==2)
       return true;
     if(n%2==0)
       return false;
     sq=sqrt(n);
     for(i=2;i<=sq;i++)
      if(n%i==0) return false;
      return true;
}

int maxDifference(int m, int n) {
    int x=0,y=0;
    for(int i=m;i<=n;i++)
    {
        if(is_prime(i))
        {
            x=i;
            break;
        }
    }
    for(int i=n;i>=m;i--)
    {
        if(is_prime(i))
        {
            y=i;
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
    return 0;
}
