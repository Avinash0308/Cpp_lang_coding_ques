#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    bool b = true;
    cin >> num;
    string str;
    cin >> str;
    for (int i = 0; i < num; i++)
    {
        if (str[i] == 'H' && str[i + 1] == 'H')
        {
            cout << "NO" << endl;
            b = false;
            break;
        }
        else
        {
            if (str[i] == '.')
            {
                str[i] = 'B';
            }
        }
    }
    if(b){
        cout<<"YES"<<endl<<str<<endl;
    }
    return 0;
}