#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool primecheck(int number)
{
    int i;
    if(number%2==0 && number!=2)
        return false;
    else
    {
        for(i=3; i<=sqrt(number); i+=2)
            if(number%i==0)
                return false;
    }
    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int temp,low,high,j,i,n,c,arry[1000];
    while(scanf("%d %d", &n, &c)==2)
    {
        j=0;
        for(i=1; i<=n; i++)
        {
            if(primecheck(i)==true)
            {
                arry[j]=i;
                j++;
            }
        }
        cout << n << " " << c << ":";
        if(j%2!=0)
        {
            if((c*2)-1>j)
            {
                for(i=0; i<j; i++)
                {
                    cout << " " << arry[i];
                }
            }
            else
            {
                temp=j/2;
                c--;
                low=temp-c;
                high=temp+c;
                while(low<=high)
                {
                    cout << " " << arry[low];
                    low++;
                }
            }
        }
        else
        {
            if((c*2)>j)
            {
                for(i=0; i<j; i++)
                {
                    cout << " " << arry[i];
                }
            }
            else
            {
                temp=j/2;
                low=temp-c;
                high=temp+c-1;
                while(low<=high)
                {
                    cout << " " << arry[low];
                    low++;
                }
            }
        }
        cout << endl << endl;;
    }
    return 0;
}
