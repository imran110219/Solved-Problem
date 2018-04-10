#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int len,temp;
    char word[1000];
    while(gets(word))
    {
        len=strlen(word);
        temp=0;
        for(int i=0;i<len;i++)
        {
            if(word[i]==' '||i==len-1)
            {
                if(i==len-1)
                {
                    for(int j=i;j>=temp;j--)
                    {
                        printf("%c", word[j]);
                    }
                    break;
                }
                for(int j=i-1;j>=temp;j--)
                {
                    printf("%c", word[j]);
                }
                printf(" ");
                temp=i+1;
            }
        }
        printf("\n");
    }
    return 0;
}
