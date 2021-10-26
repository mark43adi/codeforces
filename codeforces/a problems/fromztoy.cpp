#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int p = y / x;
        int q = y % x;
        int ans = 0;
        while (!(p == 0))
        {
            ans += p % 10;
            p = p / 10;
        }
        cout << q + ans << endl;
    }

    return 0;
}