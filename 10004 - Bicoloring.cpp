#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int i,j,node,edge,e1,e2;
    while(scanf("%d", &node)==1)
    {
        if(node == 0)
            break;
        scanf("%d", &edge);
        int arry[node][node];
        for(i=0; i<node; i++)
        {
            for(j=0; j<node; j++)
            {
                arry[i][j]=0;
            }
        }
        for(i=0; i<edge; i++)
        {
            scanf("%d %d", &e1, &e2);
            arry[e1][e2]=1;
            arry[e2][e1]=1;
        }
        /*for(i=0; i<node; i++)
        {
            for(j=0; j<node; j++)
            {
                printf("%d ", arry[i][j]);
            }
            printf("\n");
        }*/
        bool bicolor = false;
        int counter = 2;
        for(j=node-counter; j>=0; j--)
        {
            for(i=node-1; i>j; i--)
            {
                if(arry[i][j]==1)
                {
                    printf("%d-%d\n", i ,j);
                    for(int k=0; k<node-1; k++)
                    {
                        if(arry[i][k]==1 && arry[j][k]==1)
                            bicolor = true;
                    }
                }
            }
            counter++;
        }
        //if(bicolor == false)
            //printf("BICOLORABLE.\n");
        //else
            //printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
