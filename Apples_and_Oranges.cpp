#include <bits/stdc++.h>
using namespace std;
void solve(double x, double a, double b)
{
    if ((a + b) <= x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
double main()
{
    double x, a, b;
    cin >> x >> a >> b;
    solve(x, a, b);

    return 0;
}