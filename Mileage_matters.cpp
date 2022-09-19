#include <bits/stdc++.h>
using namespace std;
void solve(double n, double x, double y, double a, double b)
{
    double petrolCoast;
    double desileCoast;
    petrolCoast = (n / a) * x;
    desileCoast = (n / b) * y;
    if (petrolCoast > desileCoast)
    {
        cout << "DIESEL" << endl;
    }
    else if (petrolCoast == desileCoast)
    {
        cout << "ANY" << endl;
    }
    else
    {
        cout << "PETROL" << endl;
    }
}
int main()
{
    double t, n, x, y, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y >> a >> b;
        solve(n, x, y, a, b);
    }

    return 0;
}