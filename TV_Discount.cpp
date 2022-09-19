#include <bits/stdc++.h>
using namespace std;
void solve(int a, int b, int c, int d)
{
    if ((a - c) < (b - d))
    {
        cout << "\nFirst";
    }
    else if ((a - c) == (b - d))
    {
        cout << "\nAny";
    }
    else
    {
        cout << "\nSecond";
    }
}
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
    }

    return 0;
}