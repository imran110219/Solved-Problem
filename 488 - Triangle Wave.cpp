#include <iostream>

using namespace std;

int main()
{
    int test,amplitude,frequency;
//    cin >> test;


            cin >> amplitude >> frequency;
            for(int x=1;x<=frequency;x++)
            {
                for(int j=1;j<=amplitude;j++)
                {
                    for(int k=1;k<=j;k++)
                        cout << j;
                    cout << endl;
                }
                for(int j=amplitude-1;j>=amplitude;j--)
                {
                    for(int k=1;k<=j;k++)
                        cout << j;
                    cout << endl;
                }
                cout << endl;
           }


    return 0;
}
