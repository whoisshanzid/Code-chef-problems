#include <bits/stdc++.h>
using namespace std;
void solve(int x, int y, int z)
{
    cout << (x - y) + z << endl;
}
int main()
{
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        solve(x, y, z);
    }

    return 0;
}