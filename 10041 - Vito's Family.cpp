#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int sum,i,test,num,temp;
    cin >> test;
    while(test--)
    {
        sum=0;
        cin >> num;
        int arry[num];
        for(i=0;i<num;i++)
        {
            cin >> arry[i];
        }
        sort(arry,arry+num);
        temp=num/2;
        for(i=0;i<num;i++)
        {
            sum+=abs(arry[i]-arry[temp]);
        }
        cout << sum << endl;
    }
    return 0;
}
