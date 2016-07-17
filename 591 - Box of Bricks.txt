#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int A[109],n,m=0;
    while(scanf("%d", &n) == 1)
    {
        if(n==0)
            break;
        int s,r,x=0;
        s=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            s=s+A[i];
        }
        s=s/n;
        for(int i=0;i<n;i++)
        {
            if(A[i]>s)
            {
                x=x+(A[i]-s);
            }
        }
        printf("Set #%d\n",++m);
        printf("The minimum number of moves is %d.\n\n",x);
    }
    return 0;
}
