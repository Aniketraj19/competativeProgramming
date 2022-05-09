#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int rev = 0;
        int n;
        cin>>n;
        while(n>0)
        {
            int x = n%10;
            rev += x;
            n = n/10;
        }
    }
}