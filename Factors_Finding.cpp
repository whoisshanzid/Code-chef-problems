#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            arr[count++] = i;
        }
    }
    cout << count << endl;
    cout << arr[0];
    for (int i = 1; i < count; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}
