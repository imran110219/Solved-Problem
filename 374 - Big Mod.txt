#include<iostream>
#include<cstdio>

using namespace std;

long long mod(long long  b,long long  p,long long  m)
{
    long long  temp;
    if(p==0) return 1;
    if(p%2==0)
    {
        temp=mod(b,p/2,m);
        return ((temp%m)*(temp%m))%m;
    }
    return ((b%m)*(mod(b,p-1,m)%m))%m;
}

int main()
{
    long long  b,p,m;
    while(scanf("%lld %lld %lld", &b, &p, &m)==3)
    {
        long long res;
        res=mod(b,p,m);
        printf("%lld\n", res);
    }
    return 0;
}
