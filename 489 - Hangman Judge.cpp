#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int a,counter,flag,i,j,k;
    char c[10000],d[10000];
    while(scanf("%d",&a)!=0)
    {
        if(a==-1)
            break;
        counter=0;
        k=0;
        scanf("%s",c);
        scanf("%s",d);
        for(i=0;i<strlen(d);i++)
        {
            for(j=0,flag=0;j<strlen(c);j++)
            {
                if(d[i]==c[j])
                {
                    c[j]='0';
                    flag=1;
                    k++;
                }
            }
            if(flag==0)
                counter++;
            if(counter==7||k==strlen(c))
                break;
        }
        if(k==strlen(c))
            cout << "Round " << a << endl << "You win.";
        else if(counter==7)
            cout << "Round " << a << endl << "You lose.";
        else
            cout << "Round " << a << endl << "You chickened out.";
        cout << endl;
    }
    return 0;
}
