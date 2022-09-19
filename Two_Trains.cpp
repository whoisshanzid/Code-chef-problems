#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int atrain = 0;
        int soa = n - 1;
        int arr[soa];
        int btrain = 0;
        for (int i = 0; i < soa; i++)
        {
            cin >> arr[i];
        }
        atrain += arr[0];
        for (int i = 0; i < soa; i++)
        {
            if (i == 0)
            {
                btrain += 2 * arr[i];
                atrain += arr[i + 1];
            }
            else
            {

                if (atrain > btrain)
                {
                    btrain += atrain - btrain;
                }
                atrain += arr[i + 1];
                btrain += arr[i];
            }
        }
        cout << btrain << endl;
    }

    return 0;
}