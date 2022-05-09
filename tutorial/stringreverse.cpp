#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string rev_str;
    for (int i = str.size() - 1; i >= 0; --i)
    {
        rev_str.push_back(str[i]);
    }
    cout << rev_str << endl;
}
