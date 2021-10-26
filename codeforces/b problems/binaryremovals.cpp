#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int p = s.find("11");
        int q = s.rfind("00");
        (p != -1 && q != -1 && p < q) ? cout << "NO" : cout << "YES";
        cout << endl;
    }
    return 0;
}