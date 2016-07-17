#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    long int flag=0,len;
    char sen[100000];
    while(gets(sen))
    {
        len=strlen(sen);
        for(int i=0;i<len;i++)
        {
            if(flag==0 && sen[i]=='"')
            {
                printf("``");
                flag=1;
            }
            else if(flag==1 && sen[i]=='"')
            {
                printf("''");
                flag=0;
            }
            else
                printf("%c",sen[i]);
        }
        printf("\n");
    }
        return 0;
}
