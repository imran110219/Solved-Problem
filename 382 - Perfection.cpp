#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    long a,n;
    cout << "PERFECTION OUTPUT" << endl;
    while((cin>>a)!=0)
    {
        if(a==0)
        {
            cout << "END OF OUTPUT" << endl;
            break;
        }
        else
            {
                n=0;
                for(int i=1;i<=a/2;i++)
                {
                    if(a%i==0)
                        n=n+i;
                }
                printf("%5ld  ",a);
                if(a==n)
                    cout << "PERFECT";
                else if(a>n)
                    cout << "DEFICIENT";
                else
                    cout << "ABUNDANT";
                cout << endl;
            }
    }
    return 0;
}
