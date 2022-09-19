#include <bits/stdc++.h>
using namespace std;
void solve(double x, double y)
{
    double middlepodouble = (x + y) / 2;
    if (x < y)
    {
        cout << abs(y - middlepodouble) << endl;
    }
    else
    {
        cout << abs(x - middlepodouble) << endl;
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