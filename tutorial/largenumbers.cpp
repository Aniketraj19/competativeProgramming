#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    // now to take the last digit of the number we have to take the last digit of the string and substract the character by the value of ascii value of 0

    int last_digit = num[num.size() - 1] - '0';
    cout << last_digit;
}