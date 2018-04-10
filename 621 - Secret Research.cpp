#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int test,len;
    string number;
    cin >> test;
    while(test--)
    {
        cin >> number;
        len=number.length();
        if(number=="1"||number=="4"||number=="78")
            cout << "+";
        else if(number[len-1]=='5' && number[len-2]=='3')
            cout << "-";
        else if(number[0]=='9' && number[len-1]=='4')
            cout << "*";
        else if(number[0]=='1' && number[1]=='9' && number[2]=='0')
            cout << "?";
        cout << "\n";
    }
    return 0;
}
