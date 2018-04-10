#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

long double factorial(long double number)
{
    long double result=1;
    for(long double i=2;i<=number;i++)
    {
        result*=i;
    }
    return result;
}

int main()
{
    long double N,M,C;
    while(cin>>N>>M)
    {
        if(N==0&&M==0)
            break;
        C=factorial(N)/(factorial(N-M)*factorial(M));
        cout << N << " things taken " << M << " at a time is " << fixed << setprecision(0) << C << " exactly." << endl;
    }
    return 0;
}
