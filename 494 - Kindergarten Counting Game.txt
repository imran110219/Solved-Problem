#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int len,flag,counter;
    char word[1000];
    while(gets(word))
    {
        flag=0;
        counter=0;
        len=strlen(word);
        for(int i=0;i<len;i++)
        {
            if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z'))
            {
                if(flag==0)
                    counter++;
                flag=1;
            }
            else
                flag=0;
        }
        cout << counter << endl;
    }
    return 0;
}
