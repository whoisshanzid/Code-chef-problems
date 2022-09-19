#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }

    return 0;
}