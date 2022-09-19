#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int first = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    cout << first + n << endl;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }

    return 0;
}