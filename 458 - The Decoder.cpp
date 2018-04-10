#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int len;
    char arry[10000];
    while(gets(arry))
    {
        len=strlen(arry);
        for(int i=0;i<len;i++)
        {
            printf("%c", arry[i]-7);
        }
        printf("\n");
    }
    return 0;
}
