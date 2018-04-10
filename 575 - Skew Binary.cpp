#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    unsigned long long i,num,temp,sum;
    char arry[100];
    while(gets(arry))
    {
        i=0;
        sum=0;
        num=strlen(arry);
        while(num!=0)
        {
            temp=pow(2,num)-1;
            sum+=(arry[i]-'0')*temp;
            i++;
            num--;
        }
        if(sum==0)
            break;
        cout << sum << endl;
    }
    return 0;
}
