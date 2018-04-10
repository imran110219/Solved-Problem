#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double p,n,r;
    while(scanf("%lf %lf", &n, &p)==2)
    {
        r=pow(p,1/n);
        printf("%.0lf\n",r);
    }
    return 0;
}
