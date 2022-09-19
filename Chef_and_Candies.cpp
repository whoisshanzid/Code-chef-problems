#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    if (n < x)
    {
        cout << "0" << endl;
    }
    else
    {
        int need = n - x;
        if (need % 4 == 0)
        {
            cout << need / 4 << endl;
        }
        else
        {
            cout << ((need / 4) + 1) << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}