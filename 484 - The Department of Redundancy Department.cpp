#include <iostream>
#include <cstdio>

using namespace std;

int a[32767];

int main()
{
    freopen("in.txt", "r", stdin);
    int counter,i=0;
    while((cin >> a[i])!=0)
    {
        i++;
    }
    int b[2][i];
    for(int j=0;j<i;j++)
    {
        b[0][j]=a[j];
        counter=0;
        for(int k=0;k<i;k++)
        {
            if(b[0][j]==a[k])
                counter++;
        }
        b[1][j]=counter;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(b[0][j]==b[0][k])
            {
                b[1][k]=0;
            }
        }
        if(b[1][j]!=0)
            cout << b[0][j] << " " << b[1][j] << endl;
    }
    return 0;
}
