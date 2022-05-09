#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < (str.size() - 1) / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "not palindrome";
    }
    else
    {
        cout << "palindrome";
    }
}