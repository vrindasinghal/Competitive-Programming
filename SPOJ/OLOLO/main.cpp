#include <iostream>

using namespace std;

extern "C"
{
    int scanf ( const char * format, ... );
    int printf(const char *format,...);
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int x=0;
    for(int i=0;i<n;i++)
    {
        long long int a;
        scanf("%lld",&a);
        x=x^a;
    }
    printf("%lld",x);
}
