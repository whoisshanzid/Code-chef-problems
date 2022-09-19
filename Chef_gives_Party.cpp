#include <bits/stdc++.h>
using namespace std;

void solve(double n, double x, double k)
{
    float coast = n * x;
    if (coast <= k)
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
    double t, n, x, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> k;
        solve(n, x, k);
    }

    return 0;
}