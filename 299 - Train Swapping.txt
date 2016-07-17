#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int test,length;
    while((cin >> test)!=0)
    {
        for(int i=1;i<=test;i++)
        {
            int counter=0;
            cin >> length;
            int array[length];
            for(int i=0;i<length;i++)
            {
                cin >> array[i];
            }
            for(int x=0;x<length;x++)
	        {
                for(int y=0;y<length-1;y++)
                {
                    if(array[y]>array[y+1])
                    {
                        int temp = array[y+1];
                        array[y+1] = array[y];
                        array[y] = temp;
                        counter++;
                    }
                }
            }
             printf("Optimal train swapping takes %d swaps.\n",counter);
        }
    }
    return 0;
}
