#include <bits/stdc++.h>
using namespace std;
int needMatches(int n)
{
    switch (n)
    {
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;
    case 0:
        return 6;
        break;
    default:
        break;
    }
}
void solve(int x, int y)
{
    int matches = 0;
    int atrain = x + y;
    while (atrain != 0)
    {
        int reminder = atrain % 10;
        matches = matches + needMatches(reminder);
        atrain = atrain / 10;
    }
    cout << matches << endl;
}
int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        solve(x, y);
    }

    return 0;
}