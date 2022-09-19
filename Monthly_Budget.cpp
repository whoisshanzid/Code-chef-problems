#include <bits/stdc++.h>
using namespace std;
void solve(double x, double y)
{
    if (x >= (30 * y))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
double main()
{
    double t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        solve(x, y);
    }

    return 0;
}