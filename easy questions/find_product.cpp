#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long int ans = 1;
    long int y = 1000000000 + 7;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans = (ans * arr[i]) % (y);
    }
    cout << ans << endl;
    return 0;
}