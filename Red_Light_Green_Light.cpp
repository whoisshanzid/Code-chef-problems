#include <bits/stdc++.h>
using namespace std;
void solve(int n, int h, int arr[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    int n, h;
    cin >> t;
    while (t--)
    {
        cin >> n >> h;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(n, h, arr);
    }

    return 0;
}