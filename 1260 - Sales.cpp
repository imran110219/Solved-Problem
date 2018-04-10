#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int testcase,n;
    cin >> testcase;
    while(testcase--)
    {
        cin >> n;
        int a[n],counter=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            for(int j=0;j<i;j++)
            {
                if(a[i]>=a[j])
                    counter++;
            }
        }
        cout << counter << "\n";
    }
    return 0;
}
