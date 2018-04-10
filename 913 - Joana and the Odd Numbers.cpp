#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long number,result;
    while(scanf("%lld", &number)==1)
    {
        result=(2*((number/2) + 1)*((number/2) + 1)-3)*3;
        printf("%lld\n",result);
    }
    return 0;
}
