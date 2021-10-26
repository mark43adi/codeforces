#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    char s[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(ar, ar + n);
    int lef = 0, rig = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            if (lef > rig + ar[i])
            {
                rig += ar[i];
                cout << ar[i] << " "
                     << "R" << endl;
            }
            else
            {
                lef += ar[i];
                cout << ar[i] << " "
                     << "L" << endl;
            }
        }
        else
        {
            if (rig > lef + ar[i])
            {
                lef += ar[i];
                cout << ar[i] << " "
                     << "L" << endl;
            }
            else
            {
                rig += ar[i];
                cout << ar[i] << " "
                     << "R" << endl;
            }
        }
    }
    return 0;
}