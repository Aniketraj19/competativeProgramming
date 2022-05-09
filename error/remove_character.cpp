#include <bits/stdc++.h>
using namespace std;

int main()
{
    string string1, string2;
    cin >> string1 >> string2;
    int s1 = string1.size();
    int s2 = string2.size();
    if (s1 > s2)
    {
        for (int i = 0; i < s2; i++)
        {
            for (int j = 0; j < s1; j++)
            {
                if (string2[i] == string1[j])
                {
                    int x = j;
                    while (x != s1)
                    {
                        string1[x] = string1[x + 1];
                        x++;
                    }
                }
            }
        }
        cout << string1;
    }
}